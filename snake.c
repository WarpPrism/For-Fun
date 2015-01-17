#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define SNAKE_MAX_LENGTH 25
#define SNAKE_HEAD 'H'
#define SNAKE_BODY 'X'
#define SNAKE_CELL ' '
#define SNAKE_FOOD '$'
#define WALL_CELL '*'
int alive = 1;
void snakemove(int, int);
void put_money(void);
void output(void);
void gameover(void); 
char map[12][13] = 
	 {

	 	"************",

	 	"*XXXXH     *",

	 	"*          *",

	 	"*          *",

	 	"*          *",

	 	"*          *",

	 	"*          *",

	 	"*          *",

	 	"*          *",

	 	"*          *",

	 	"*          *",

	 	"************"

	 };
int snakeX[SNAKE_MAX_LENGTH] = {1, 2, 3, 4, 5};
int snakeY[SNAKE_MAX_LENGTH] = {1, 1, 1, 1, 1};
int snakelength = 5; 
int x_money;
int y_money;
int errinfo = 0;
int if_put_money = 1;
int main() {
    while (alive) {
    	char how;
    	system("cls");
        printf("Attention!cls(clean screen) is not the command of Linux OS.\n");
        printf("Just ignore that.\n");
    	output();
        /* if (errinfo == 1) {
            printf("error! command not found!\npelase input again\n");
     	    system("pause");
        } How come! Runtime error */
    	scanf("%c", &how);
    	switch (how) {
            case 'A' :
                case 'a' :
                    snakemove(0, -1);
                    errinfo = 0;
                    break;
            case 'S' :
                case 's' :
                    snakemove(1, 0);
                    errinfo = 0;
                    break;
            case 'D' :
                case 'd' :
                    snakemove(0, 1);
                    errinfo = 0;
                    break;
            case 'W' :
                case 'w' :
                    snakemove(-1, 0);
                    errinfo = 0;
                    break;
            default :
                    errinfo = 1;
                    break;
    	}
    }
    return 0;
}
void output(void) {
	int x, y, length;
	for (y = 1; y <= 10; y++) {
		for (x = 1; x <= 10; x++) {
			for (length = 0; length < snakelength; length++) {
				if (snakeX[length] == x && snakeY[length] == y) { 
                                    if (length == snakelength-1) {
				        map[y][x] = SNAKE_HEAD;
			            } else {
				        map[y][x] = SNAKE_BODY;
				        break;
			            }
				} else {
					map[y][x] = SNAKE_CELL; // living space of the snake
				}
			}
		}
	}
	if (if_put_money) {
		put_money();
	}
	map[y_money][x_money] = '$';
	int row, col;
	for (row = 0; row < 12; row++, printf("\n")) {
		for (col = 0; col < 12; col++) {
			printf("%c", map[row][col]);
		}
	}
	return;
}
void put_money(void) {
	int x, y;
	do {
		x = rand()%11;
		y = rand()%11;
	} while (map[y][x] != ' ');
	x_money = x;
	y_money = y;
	if_put_money = 0;
	return;
}
void gameover(void) {
	if (snakelength == SNAKE_MAX_LENGTH) {
		printf("Excellent!\nYou are a BIG GOD!\n");
		alive = 0;
		return;
	}
	system("cls");
	printf("Sorry!\nGame over!\nYou can try it again!\n");
	alive = 0;
	system("pause");
	return;
}
void snakemove(int dy, int dx) {
	map[snakeY[0]][snakeX[0]] = ' '; 
	char sign = map[snakeY[snakelength - 1] + dy][snakeX[snakelength - 1] + dx];
	if (sign != ' ' && sign != '$') {
		gameover();
		return;
	} else if (sign == '$') {
		snakelength++;
		if (snakelength == SNAKE_MAX_LENGTH)  {
			gameover();
		}
		snakeX[snakelength - 1] = snakeX[snakelength - 2] + dx;
		snakeY[snakelength - 1] = snakeY[snakelength - 2] + dy;
		if_put_money = 1;
		return;
	}
	int i;
	for (i = 1; i < snakelength; i++) {
		snakeX[i-1] = snakeX[i];
		snakeY[i-1] = snakeY[i];
	}
	snakeX[snakelength-1] += dx;
	snakeY[snakelength-1] += dy;
}
