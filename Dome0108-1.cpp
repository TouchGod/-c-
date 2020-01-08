/*
 *FileName:Dome0108-1
 *Author:Fang Jiaxin
 *Function；computing the date
 *Date；Jan 8th,2020
 *E-mail:
 */

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    while (1)
    {
        string b;
        cout<<"你想玩日期游戏吗？是请输入“y”，否则输入“n”"<<endl;
        cin>>b;
        if ("y"==b)
        {
            int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
            int date=0;
            int year,month,day;
            cout<<"请输入一个日子：（格式为2020 1 8）"<<endl;
            cin>>year>>month>>day;
            while (month<1 || month>12)
            {
                cout<<"所输入的月份不正确，请重新输入月份:";
                cin>>month;
            }

            if ((year%4==0 && year%100!=0) || (year%400==0))
            {
                arr[2]=arr[2]+1;
            }

            while (day>arr[month])
            {
                cout<<"所输入的日期不正确，请重新输入日期: ";
                cin>>day;
            }

            for(int i=1;i<month;i++)
            {
                date=date+arr[i];
            }

            date=date+day;
            cout<<"Year: "<<year<<" Month: "<<month<<" Day: "<<day<<" is the "<<date<<"th day of this year: "<<year<<endl;
            continue;
        }
        if ("n"==b)
        {
            cout<<"Bye!"<<endl;
            break;
        }
        else
        {
            cout<<"输入非法字符，请输入正确的字符（y/n）"<<endl;
            continue;
        }
    }


    return 0;
}

