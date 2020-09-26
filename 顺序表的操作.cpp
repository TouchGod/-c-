#include <bits/stdc++.h>

using namespace std;

#define OK 1
#define ERROR 0
#define MAXSIZE 10

typedef struct SqList{
    int *elem;  //
    int length;
    int listsize;
}SqList;

int InitList(SqList &L)   //建立顺序表
{
    L.elem=new int[MAXSIZE];
    if (!L.elem)
    {
        exit (OVERFLOW);
    }
    L.length=0;
    return OK;
}

int GetElem(SqList &L,int i,int e)
{
    if (i<1 || i>L.length)
    {
        return ERROR;
    }
    L.elem[i-1]=e;
    return OK;
}

int ListInsert(SqList &L,int i,int e)
{
    if ((i<1) || (i>L.length+1))
    {
        return ERROR;
    }
    if (L.length==MAXSIZE){
        return ERROR;
    }
    for (int j=L.length-1;j>=i-1;j--)
    {
        L.elem[j+1]=L.elem[j];
    }
    L.elem[i-1]=e;
    L.length++;
    return OK;
}

int ListDelete(SqList &L, int i)
{
    if ((i<1) || (i>L.length))
        return ERROR;
    for(int j=i;j<=L.length-1;j++)
    {
        L.elem[j-1]=L.elem[j];
    }
    L.length--;
    return OK;
}

void ShowList(SqList &L)
{
    int i=0;
    cout<<"当前顺序表:"<<endl;
    for ( ;i<L.length-1;i++)
    {
        cout<<L.elem[i]<<" ";
    }
    cout<<L.elem[i]<<endl;
}

void DestroyList(SqList &L)
{
    if (L.elem)
    {
        delete[]L.elem;
    }
    L.length=0;
    L.elem=NULL;
}

int main()
{
    SqList a;   //创建顺序表，并判断是否创建成功
    int I1,I2;
    int D;
    if (InitList(a)== 1)
    {
        cout<<"Success"<<endl;
    }
    else
    {
        cout<<"Failure"<<endl;
    }
    int x,y;
    cout<<"请输入元素个数"<<endl;
    cin>>x;
    a.length=x;
    int i=1;
    cout<<"请输入元素,输入-999结束"<<endl;
    while (1)
    {
        cin>>y;
        if (y==-999)
            break;
        GetElem(a,i,y);
        i++;
    }
    ShowList(a);
    cout<<"请输入要删除的元素的位置"<<endl;
    cin>>D;
    if (ListDelete(a,D)==1)
    {
        cout<<"成功，";
        ShowList(a);
    }
    cout<<"请输入要插入的元素的位置及元素值"<<endl;
    cin>>I1;
    cin>>I2;
    if (ListInsert(a,I1,I2)==1)
    {
        cout<<"成功，";
        ShowList(a);
    }
    DestroyList(a);
}

