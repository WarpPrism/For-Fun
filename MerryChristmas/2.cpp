// Created By WarpPrism(ZhouJihao) In SYSU SS.
// Messy Code ~_~
// 2014-12-20
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <mmsystem.h>
#include <direct.h>
#include <cstdio>
#include <string.h>
#pragma comment(lib,"winmm.lib")
#define Time 350
#define maxsize 500
using namespace std;

void printHouse();
void printTree();
void printFlower();
void printGift();
void giftFlash();
void cmdFlash();
void beHappy();

int main() {
	system("title Merry Christmas!");
	char path[maxsize];
	_getcwd(path, maxsize);
	const char *NAME = "\\1.wav";
	for (int i = strlen(path), j = 0; j < strlen(NAME) + 1; i++, j++) {
		path[i] = NAME[j];
	}
	// cout << path << endl;
	PlaySound(TEXT(/*C:\\Users\\Administrator\\Desktop\\1.wav"*/path), NULL, SND_FILENAME | SND_ASYNC);
	giftFlash();
	// printFlower();
	printHouse();
	//system("cls");
	printTree();
	//system("cls");
	Sleep(2000);
	system("cls");
	Sleep(Time);
	cout << "Merry Christmas!" << endl;
	Sleep(Time);
	cout << "May you have a Nice~ day! :-)" << endl;
	Sleep(1000);
	beHappy();
	cout << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "The End" << endl;
	cmdFlash();
	system("pause");
	return 0;
}

void printHouse() {
	cout << endl;
	system("color 71");
	Sleep(Time);
	cout << "　　　/\\~~~~~~~~~~~~~\\　　　▓　　^*^　　　☆　　$$　.☆" << endl;
	system("color 72");
	Sleep(Time);
	cout << "　　./　\\~~~▓~　 ~~~~\\ ◆　　圣诞 .快乐　 *　 $◢◣$　*" << endl;
	system("color 73");
	Sleep(Time);
	cout << "　　/ ^^ \\ ══════\\.◆　　　 *　*　　*　 $◢★◣$　*" << endl;
	system("color 74");
	Sleep(Time);
	cout << "　..▎[]　▎田　田 ▎ |┃◆　 .　　　　　*　 $◢■■◣$　*" << endl;
	system("color 75");
	Sleep(Time);
	cout << "　&&▎　　▎　　　 ▎'|'▎ @　　　　　　　* $◢■■■◣$ *" << endl;
	system("color 76");
	Sleep(Time);
	cout << "＃ ■■■■■■■■■■〓▄▃▂▁愿你圣诞快乐︸︸||︸︸ " << endl;
}

void printTree() {
	system("color 79");
	Sleep(Time);
	cout << "           *             ," << endl;
	system("color 7a");
	Sleep(Time);
	cout << "                       _/^\\_" << endl;
	system("color 7b");
	Sleep(Time);
	cout << "                      <     >" << endl;
	system("color 7c");
	Sleep(Time);
	cout << "     *                 /.-.\\         *" << endl;
	system("color 7d");
	Sleep(Time);
	cout << "              *        `/&\\`                   *" << endl;
	system("color 7e");
	Sleep(Time);
	cout << "                      ,@.*;@," << endl;
	system("color 7f");
	Sleep(Time);
	cout << "                     /_o.I *_\\    *" << endl;
	system("color 71");
	Sleep(Time);
	cout << "        *           (`'--:o(_@;" << endl;
	system("color 72");
	Sleep(Time);
	cout << "                   /`;--.,__ `')             *" << endl;
	system("color 73");
	Sleep(Time);
	cout << "                  ;@`o % O,*`'`&\\ " << endl;
	system("color 74");
	Sleep(Time);
	cout << "            *    (`'--)_@ ;o #'()\\      *" << endl;
	system("color 75");
	Sleep(Time);
	cout << "                 /`;--._`''--._O'@;" << endl;
	system("color 76");
	Sleep(Time);
	cout << "                /&*,()~o`;-.,_ `""`)" << endl;
	system("color 78");
	Sleep(Time);
	cout << "     *          /`,@ ;+& () o*`;-';\\" << endl;
	system("color 7a");
	Sleep(Time);
	cout << "               (`""--.,_0o*`;-' &()\\" << endl;
	system("color 7b");
	Sleep(Time);
	cout << "               /-.,_    ``''--....-'`)  *" << endl;
	system("color 7c");
	Sleep(Time);
	cout << "          *    /@%;o`:;'--,.__   __.'\\" << endl;
	system("color 7d");
	Sleep(Time);
	cout << "              ;*,&(); @ $ &^;~`s`o;@();         *" << endl;
	system("color 7e");
	Sleep(Time);
	cout << "              /()Emily & ().o@Robin%O\\" << endl;
	system("color 7f");
	Sleep(Time);
	cout << "              `@=#==~~==,,,.,=`==`===``" << endl;
	system("color 71");
	Sleep(Time);
	cout << "           __.----.(\\-''#####---...___...-----._" << endl;
	system("color 72");
	Sleep(Time);
	cout << "         '`         \\)_`""""**" << endl;
	system("color 73");
	Sleep(Time);
	cout << "                 .--' ') " << endl;
	system("color 74");
	Sleep(Time);
	cout << "               o(  )_-\\ " << endl;
	system("color 75");
	Sleep(Time);
	cout << "                 ```""" << endl;
	system("color 7c");
	Sleep(Time);
}

void printFlower() {
	system("color 71");
	Sleep(Time);
	cout << "             {@}" << endl;
	system("color 7a");
	Sleep(Time);
	cout << "          {@} * {@}" << endl;
	system("color 72");
	Sleep(Time);
	cout << "       {@} * {@} * {@}" << endl;
	system("color 7b");
	Sleep(Time);
	cout << "     {@}* {@} * {@} * {@}" << endl;
	system("color 73");
	Sleep(Time);
	cout << "     \\ {@} * {@} * {@} /" << endl;
	system("color 7c");
	Sleep(Time);
	cout << "        \\ \\ \\ l / / /" << endl;
	system("color 74");
	Sleep(Time);
	cout << "         \\\\ \\ Y / //" << endl;
	system("color 7d");
	Sleep(Time);
	cout << "           \\\\ l //" << endl;
	system("color 75");
	Sleep(Time);
	cout << "            \\\\Y// " << endl;
	system("color 7e");
	Sleep(Time);
	cout << "            //*\\\\ " << endl;
	system("color 79");
	Sleep(Time);
	cout << "             >=< " << endl;
}
void printGift() {
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                _   _" << endl;
	cout << "                               ((\\o/))" << endl;
	cout << "                          .-----//^\\\\-----." << endl;
	cout << "                          |    /`| |`\\    |       .==========." << endl;
	cout << "                          |      | |      |       [ for you! ]" << endl;
	cout << "                          |      | |      |       '=========='" << endl;
	cout << "                          |      | |      |" << endl;
	cout << "                          '------===------'" << endl;
}

void giftFlash() {
	system("color 7c");
	printGift(); Sleep(Time);
	Sleep(Time); Sleep(Time); Sleep(Time);
	system("cls"); Sleep(Time);

	printGift(); Sleep(Time);
	system("cls"); Sleep(Time);

	printGift(); Sleep(Time);
	system("cls"); Sleep(Time);

	printGift(); Sleep(Time);
	system("cls"); Sleep(Time);

	printGift(); Sleep(Time);
	system("cls");
}
void cmdFlash() {
	// bool I_am_not_perfect;
	do {
		Sleep(Time);
		system("color 71");
		Sleep(Time);
		system("color 72");
		Sleep(Time);
		system("color 73");
		Sleep(Time);
		system("color 74");
		Sleep(Time);
		system("color 75");
		Sleep(Time);
		system("color 7b");
		Sleep(Time);
		system("color 78");
		Sleep(Time);
		system("color 79");
		Sleep(Time);
		system("color 7a");
	} while (1);
}
void beHappy() {
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                 ＃〓§〓〓〓〓〓§〓〓〓〓〓〓§〓〓〓〓〓§〓＃" << endl;
	cout << "                 　　↓　　　　　↓　　　　　　↓　　　　　↓ " << endl;
	cout << "                 　☆★☆　　　☆★☆　　　　☆★☆　　　☆★☆" << endl;
	cout << "                 ☆　祝　☆　☆　你　☆　　☆　幸　☆　☆　福　☆" << endl;
	cout << "                　 ☆★☆　　　☆★☆　　　　☆★☆　　　☆★☆ " << endl;
	cout << "                 　　↓　　　　　↓　　　　　　↓　　　　　↓ " << endl;
	cout << "                 　　※　　　　　※　　　　　　※　　　　　※ " << endl;
}
