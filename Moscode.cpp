#include<iostream>
using namespace std;
int strlen(char a[])//自制strlen
{
	int x = 0;
	for (int i = 0; a[i] != '\0'; i++)
		x++;
	return x;
}
char mols4(char a, char b, char c, char d)
{
	if (a == '-'&&b == '.'&&c == '.'&&d == '.')
		return 'B';
	if (a == '-'&&b == '.'&&c == '-'&&d == '.')
		return 'C';
	if (a == '.'&&b == '.'&&c == '-'&&d == '.')
		return 'F';
	if (a == '.'&&b == '.'&&c == '.'&&d == '.')
		return 'H';
	if (a == '.'&&b == '-'&&c == '-'&&d == '-')
		return 'J';
	if (a == '.'&&b == '-'&&c == '.'&&d == '.')
		return 'L';
	if (a == '.'&&b == '-'&&c == '-'&&d == '.')
		return 'P';
	if (a == '-'&&b == '-'&&c == '.'&&d == '-')
		return 'Q';
	if (a == '.'&&b == '.'&&c == '.'&&d == '-')
		return 'V';
	if (a == '-'&&b == '.'&&c == '.'&&d == '-')
		return 'X';
	if (a == '-'&&b == '.'&&c == '-'&&d == '-')
		return 'Y';
	if (a == '-'&&b == '-'&&c == '.'&&d == '.')
		return 'Z';
}
char mols3(char a, char b, char c)
{
	if (a == '-'&&b == '.'&&c == '.')
		return 'D';
	if (a == '-'&&b == '-'&&c == '.')
		return 'G';
	if (a == '-'&&b == '.'&&c == '-')
		return 'K';
	if (a == '-'&&b == '-'&&c == '-')
		return 'O';
	if (a == '.'&&b == '-'&&c == '.')
		return 'R';
	if (a == '.'&&b == '.'&&c == '.')
		return 'S';
	if (a == '.'&&b == '.'&&c == '-')
		return 'U';
	if (a == '.'&&b == '-'&&c == '-')
		return 'W';
}
char mols2(char a, char b)
{
	if (a == '.'&&b == '-')
		return 'A';
	if (a == '.'&&b == '.')
		return 'I';
	if (a == '-'&&b == '-')
		return 'M';
	if (a == '-'&&b == '.')
		return 'N';
}
char mols1(char a)
{
	if (a == '.')
		return 'E';
	if (a == '-')
		return 'T';
}
void let(char a[])
{
	for (int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'A')
			cout << ".-" << " ";
		if (a[i] == 'b' || a[i] == 'B')
			cout << "-..." << " ";
		if (a[i] == 'c' || a[i] == 'C')
			cout << "-.-." << " ";
		if (a[i] == 'd' || a[i] == 'D')
			cout << "-.." << " ";
		if (a[i] == 'e' || a[i] == 'E')
			cout << "." << " ";
		if (a[i] == 'f' || a[i] == 'F')
			cout << "..-." << " ";
		if (a[i] == 'g' || a[i] == 'G')
			cout << "--." << " ";
		if (a[i] == 'h' || a[i] == 'H')
			cout << "...." << " ";
		if (a[i] == 'i' || a[i] == 'I')
			cout << ".." << " ";
		if (a[i] == 'j' || a[i] == 'J')
			cout << ".---" << " ";
		if (a[i] == 'k' || a[i] == 'K')
			cout << "-.-" << " ";
		if (a[i] == 'l' || a[i] == 'L')
			cout << ".-.." << " ";
		if (a[i] == 'm' || a[i] == 'M')
			cout << "--" << " ";
		if (a[i] == 'n' || a[i] == 'N')
			cout << "-." << " ";
		if (a[i] == 'o' || a[i] == 'O')
			cout << "---" << " ";
		if (a[i] == 'p' || a[i] == 'P')
			cout << ".--." << " ";
		if (a[i] == 'q' || a[i] == 'Q')
			cout << "--.-" << " ";
		if (a[i] == 'r' || a[i] == 'R')
			cout << ".-." << " ";
		if (a[i] == 's' || a[i] == 'S')
			cout << "..." << " ";
		if (a[i] == 't' || a[i] == 'T')
			cout << "-" << " ";
		if (a[i] == 'u' || a[i] == 'U')
			cout << "..-" << " ";
		if (a[i] == 'v' || a[i] == 'V')
			cout << "...-" << " ";
		if (a[i] == 'w' || a[i] == 'W')
			cout << ".--" << " ";
		if (a[i] == 'x' || a[i] == 'X')
			cout << "-..-" << " ";
		if (a[i] == 'y' || a[i] == 'Y')
			cout << "-.--" << " ";
		if (a[i] == 'z' || a[i] == 'Z')
			cout << "--.." << " ";
		if (a[i] == ' ')
			continue;
		if (a[i] == ' ')
			continue;
		if (a[i] == ',')
			continue;
	}
}
bool findwromols(char a[])
{
	int x = strlen(a);
	for (int i = 0; i<x; i++)
		if (a[i] != '-'&&a[i] != '.'&&a[i] != ' ')
			return 1;
	return 0;
}
bool findwrolett(char a[])
{
	int x = strlen(a);
	for (int i = 0; i<x; i++)
		if (a[i] != ' ')
		{
		if (a[i]<'A' || a[i]>'z' || (a[i]>'Z'&&a[i]<'a'))
			return 1;
		}
	return 0;
}

void molstolet(void)
{
	char a[100];
reimputmols:cout << "请输入莫尔斯电码呦亲！O(∩_∩)O！" << endl << "注意字符是英文的-（这是减号）.（这是句号） （这是空格），例如“--.- -... ---. ”呦亲O(∩_∩)O！" << endl << "最后一个莫尔斯码打完也要再打一个空格呦亲~O(∩_∩)O！另外不要输得太长呦亲~" << endl;
	cout << "如果输入的不是莫尔斯电码程序会停止，确保你输入的没错呦亲~" << endl;
	cin.sync();
	cin.clear();
	cin.getline(a, 100);
	if (findwromols(a))
	{
		cout << "输错了呦亲~" << endl;
		goto reimputmols;
	}
	cout << "ta对你的祝福就是这个呦~赶快拆成单词看一看吧~" << endl;
	int x = strlen(a);
	for (int i = 0; i<x;)
	{
		if (a[i] != ' ')
		{
			if (a[i + 1] == ' ')
			{
				cout << mols1(a[i]);
				i += 1;
			}
			else
			{
				if (a[i + 2] == ' ')
				{
					cout << mols2(a[i], a[i + 1]);
					i += 2;
				}
				else
				{
					if (a[i + 3] == ' ')
					{
						cout << mols3(a[i], a[i + 1], a[i + 2]);
						i += 3;
					}
					else
					{
						if (a[i + 4] == ' ')
						{
							cout << mols4(a[i], a[i + 1], a[i + 2], a[i + 3]);
							i += 4;
						}
					}
				}
			}
		}
		else
		{
			for (i++; a[i] == ' '; i++);
		}
	}
	cout << endl;
}
void lettomols(void)
{
	char a[91];
reimputlett:cout << "输入你对ta的祝福呦亲~不要输得太长呦亲~O(∩_∩)O！~" << endl;
	cin.sync();
	cin.clear();
	cin.getline(a, 100);
	if (findwrolett(a))
	{
		cout << "输错了呦亲~只能输入英文字符和空格哟~" << endl;
		goto reimputlett;
	}
	cout << "你的祝福变成莫尔斯电码就是这个呦~" << endl;
	let(a);
	cout << endl << "赶快写给ta看看吧~" << endl;
}

void main()
{
	int a;
rerun:cout << "圣诞节快到啦~得动做了这个小程序送给你~" << endl << "请输入你想实现的功能哟亲~O(∩_∩)O~" << endl << "输入1是把英文翻译成莫尔斯电码，输入2是把莫尔斯电码翻译成英文，输入3是退出呦亲~" << endl << "O(∩_∩)O~" << endl;
	cin >> a;
	if (a == 1)
		molstolet();
	if (a == 2)
		lettomols();
	if (a == 3)
		goto fin;
	if (a != 1 && a != 2 && a != 3)
		cout << "你输错了呦亲~" << endl;
	cout << "还要再玩吗亲~O(∩_∩)O？（Y/N）" << endl;
	char ch;
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
		goto rerun;
fin:cout << "得动祝你圣诞快乐呦~有ta的要幸福，没ta的要加油~O(∩_∩)O嗯！" << endl;
	system("pause");
}
