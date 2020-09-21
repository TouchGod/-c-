#include <bits/stdc++.h>

using namespace std;

#define OK 1
#define ERROR 0
#define OVERFLOW -2
#define MAXSIZE 100

typedef struct SqList{
    int *elem;  //
    int length;
    int listsize;
}SqList;

int InitList(SqList &L)
{
    L.elem=new int[MAXSIZE];
    if (!L.elem)
    {
        exit (OVERFLOW);
    }
    L.length=0;
    return OK;
}

int GetElem(SqList &L,int i,int &e)
{
    if (i<1 || i>L.length)
    {
        return ERROR;
    }
    e=L.elem[i-1];
    return OK;
}

int ListInsert(SqList &L,int i,int e)
{
    if ((i<1) || (i>L.length+1))
        return ERROR;
    if (L.length==MAXSIZE)
        return ERROR;
    for (int j=L.length-1;j>=i-1;j++)
    {
        L.elem[j+1]=L.elem[j];
        L.elem[i-1]=e;
        ++L.length;
    }
    return OK;
}

int ListDelete(SqList &L, int i)
{
    if ((i<1) || (i>L.length))
        return ERROR;
    for(int j=i;j<=L.length-1;j++)
    {
        L.elem[j-1]=L.elem[j];
        L.length--;
    }
    return OK;
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
    if (InitList(a)== 1)
    {
        cout<<"Success"<<endl;
    }
    else
    {
        cout<<"Failure"<<endl;
    }
}

