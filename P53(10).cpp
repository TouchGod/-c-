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

void Delete(SqList &L,int item)
{
    int i=0;int j=0;int k;int count=0;
    for(k=0;k<L.length;k++)
    {
        if(L.elem[k]!=item)
        {
            L.elem[j]=L.elem[i];
            i++;
            j++;

        }
        else
        {
            i++;
            count++;
        }

    }
    L.length-=count;
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
    SqList A;   //创建顺序表，并判断是否创建成功
    int D;
    if (InitList(A)== 1)
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
    A.length=x;
    int i=1;
    cout<<"请输入元素,输入-999结束"<<endl;
    while (1)
    {
        cin>>y;
        if (y==-999)
            break;
        GetElem(A,i,y);
        i++;
    }
    ShowList(A);
    cout<<"删除表中所有值为item的数据元素，请输入item："<<endl;
    cin>>D;
    Delete(A,D);
    cout<<"选择删除后线性表为："<<endl;
    ShowList(A);
    DestroyList(A);
}
