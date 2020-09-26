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

int InitList(SqList &L)   //����˳���
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
    cout<<"��ǰ˳���:"<<endl;
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
    SqList a;   //����˳������ж��Ƿ񴴽��ɹ�
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
    cout<<"������Ԫ�ظ���"<<endl;
    cin>>x;
    a.length=x;
    int i=1;
    cout<<"������Ԫ��,����-999����"<<endl;
    while (1)
    {
        cin>>y;
        if (y==-999)
            break;
        GetElem(a,i,y);
        i++;
    }
    ShowList(a);
    cout<<"������Ҫɾ����Ԫ�ص�λ��"<<endl;
    cin>>D;
    if (ListDelete(a,D)==1)
    {
        cout<<"�ɹ���";
        ShowList(a);
    }
    cout<<"������Ҫ�����Ԫ�ص�λ�ü�Ԫ��ֵ"<<endl;
    cin>>I1;
    cin>>I2;
    if (ListInsert(a,I1,I2)==1)
    {
        cout<<"�ɹ���";
        ShowList(a);
    }
    DestroyList(a);
}

