/*心情不爽，被坑了，没留意到system命令，看来以后有system的要多加小心才是。
分析一下，原string是"rgtscnvm\",r" 其中\是转义字符，没什么意义，就是为了
保证后面的"，在这里string设为50纯粹是为了干扰注意力。然后这厮作了个循环
string[i]++，原字符串就变为了shutdown#-s，到这里就可以看出这是一个自动关机
的代码，然后处理空格string[8] -= 3，就变为"shutdown -s"，最后system("shutdown -s");
实现关机，呵呵。 */

/* 如果要取消关机，在命令行输入shutdown -a即可 */


#include <cstdlib>
#include <iostream>
int main() {
	using namespace std;
	char string[50] = "rgtscnvm\",r";
	for (int i = 0; i != 11; i++)
		string[i] += 1;
	cout << string << endl;
	string[8] -= 3;
	cout << string << endl;
	cout << "hello world !" << endl;
	// system(string);
	system("pause");
	return 0;
}
