#include <iostream>
#include <windows.h>
using namespace std;
 
const unsigned char s=3; // 心的图形
const unsigned char smile=1; // 爱的微笑
int main()
{
  SetConsoleOutputCP(437); // 设置环境为美国系统
  system("color 0c"); // 设置为红色
   
  cout<<"\n\nMerry Christrmas\n\n";
  int row,col,sty,sty2,i=0;
  int love[5]={1,3,5,3,1};
  // 打印心形
  for (row=1;row<=5;row++) // 控制行数
  {
      if(i<=2){
          for(sty=3;sty>=row;sty--) // 控制外观
              cout<<"  ";
          for(col=love[i];col>=1;col--) // 控制心形
              cout<<s<<" ";
      }
      else if(i>=3){
          for (sty2=8%row?3:2;sty2>=1;sty2--) // 原理同上
              cout<<"  ";
          for (col=love[i];col>=1;col--)   // 原理同上
              cout<<s<<" ";
      }
       
      cout<<endl;
      i++;
    }
   cout<<"\n\n  Have A NICE DAY!"<<smile<<smile<<s<<endl;
   //cout << "五十六个闰土！" << endl;
   //cout << "五十六只猹！" << endl;
   //cout << "五十六只闪亮钢叉放你家！" << endl;
   //cout << "五十六个声音汇成一句话！" << endl;
   //cout << "叫你偷瓜！ 叫你偷瓜！ 叫你偷瓜！" << endl;
   system("pause"); // 让屏幕暂停
  return 0;
}
