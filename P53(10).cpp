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
    SqList A;   //����˳������ж��Ƿ񴴽��ɹ�
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
    cout<<"������Ԫ�ظ���"<<endl;
    cin>>x;
    A.length=x;
    int i=1;
    cout<<"������Ԫ��,����-999����"<<endl;
    while (1)
    {
        cin>>y;
        if (y==-999)
            break;
        GetElem(A,i,y);
        i++;
    }
    ShowList(A);
    cout<<"ɾ����������ֵΪitem������Ԫ�أ�������item��"<<endl;
    cin>>D;
    Delete(A,D);
    cout<<"ѡ��ɾ�������Ա�Ϊ��"<<endl;
    ShowList(A);
    DestroyList(A);
}
