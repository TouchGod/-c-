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
       cout<<"�������������Ϸ�������������y������������n."<<endl;
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
           cout<<"������һ����λ��:";
             n=1;
             while (1)
             {

                 if (n>1)
                 {
                     cout<<"������һ����λ�������˳�������0):"<<endl;
                 }
                 while (1)
                 {
                     cin>>data;
                     if (!cin)
                     {
                         cin.clear();
                         cout<<"�������ȷ��λ��������������"<<endl;
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
                         cout<<"�������ȷ��λ��������������"<<endl;
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
           cout<<"�����ʽ����ȷ��������y/n"<<endl;
           continue;
       }


   }


   return 0;

}

