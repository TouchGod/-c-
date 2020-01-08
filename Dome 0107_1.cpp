/*FileName:Dome 0107_1.cpp
 *Author:Fang Jiaxin
 *Function:
 *Date:Jan 7th,2020
 *E-mail:
 */
#include <iostream>
using namespace std;
int main()
{
   while (1)
   {
       cout<<"你想玩回文数游戏吗？如果想请输入y，不想则输入n."<<endl;
       char a;
       cin>>a;
       if (a=='n')
       {
           cout<<"bye!";
           break;
       }
     if  (a=='y')
     {
         int data;
         while (1)
         {
             cout<<"请输入一个五位数:";
             cin>>data;
         if (data>9999 && data<100000)
            break;
         else
           {
             cout<<"输入非正确五位数，请重新输入"<<endl;
             continue;
           }
         }
         int myriabit,kilobit,decade,unit;
         myriabit=data/10000;
         kilobit=(data%10000)/1000;
         decade=(data%100)/10;
         unit=(data%10);
         if (myriabit==unit && kilobit==decade)
              cout<<"YES!"<<endl;
         else
              cout<<"NO!"<<endl;

     }
     else
       {
        cout<<"输入格式不正确，请输入y/n"<<endl;
        continue;
       }


   }


   return 0;

}
