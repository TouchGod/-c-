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
       cout<<"�������������Ϸ�������������y������������n."<<endl;
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
             cout<<"������һ����λ��:";
             cin>>data;
         if (data>9999 && data<100000)
            break;
         else
           {
             cout<<"�������ȷ��λ��������������"<<endl;
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
        cout<<"�����ʽ����ȷ��������y/n"<<endl;
        continue;
       }


   }


   return 0;

}
