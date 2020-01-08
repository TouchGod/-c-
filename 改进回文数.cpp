/*FileName:Dome 0107_1.cpp
 *Author:Fang Jiaxin
 *Function:Palindromic number
 *Date:Jan 7th,2020
 *E-mail:
 */

#include <iostream>
#include <string>

using namespace std;

int main()
{
   while (1)
   {
       cout<<"你想玩回文数游戏吗？如果想请输入y，不想则输入n."<<endl;
       string a;
       cin>>a;
       if ("n"==a)
       {
           cout<<"bye!";
           break;
       }
       if  ("y"==a)
       {
           int data,n;
           cout<<"请输入一个五位数:";
             n=1;
             while (1)
             {

                 if (n>1)
                 {
                     cout<<"请输入一个五位数（如退出则输入0):"<<endl;
                 }
                 while (1)
                 {
                     cin>>data;
                     if (!cin)
                     {
                         cin.clear();
                         cout<<"输入非正确五位数，请重新输入"<<endl;
                         continue;
                     }
                     if (data>9999 && data<100000)
                     {
                         break;
                     }
                     if (0==data)
                     {
                         break;
                     }
                     else
                     {
                         cout<<"输入非正确五位数，请重新输入"<<endl;
                         continue;
                     }
                 }
                 if (0==data && n>1)
                     {
                         break;
                     }
                 int myriabit,kilobit,decade,unit;
                 myriabit=data/10000;
                 kilobit=(data%10000)/1000;
                 decade=(data%100)/10;
                 unit=(data%10);
                 if (myriabit==unit && kilobit==decade)
                 {
                     cout<<"YES!"<<endl;
                 }
                 else
                 {
                      cout<<"NO!"<<endl;
                 }
                 n=n+1;
             }
             cout<<"Bye!"<<endl;
             break;


       }
       else
       {
           cout<<"输入格式不正确，请输入y/n"<<endl;
           continue;
       }


   }


   return 0;

}

