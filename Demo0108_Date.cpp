


/*
 * Author: Yan Yonghang
 * E-mail:feifanyyh@163.com
 * Date:Jan 8, 2020
 * Function: Computing the Date
 */

#include <iostream>

using namespace std;

int main()
{
	/* 变量的本质：内存里的存储单元
	 * 变量的四要素：变量名、类型、值、取值范围
	 */

    //数组：一组具有相同数据类型的元素的连续存储空间
    int date=0;
    int year, month, day;
    cout << "请输入一个日期：（例如：2020 1 8）";
    cin >> year >> month >> day;

    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31}; // 初始化值列表

    if((year%4==0&&year%100!=0)||(year%400==0))
        arr[2]+=1;

    for(int i=1; i<month; i++)
        date+=arr[i];

    date+=day;

    cout << "Year: " << year << " Month: "
    << month << " Day: " << day <<
    " is the " << date << "th day in the Year: " << year << endl;



	return 0;  // 当程序正常退出时，该程序向操作系统返回的一个值。
}
