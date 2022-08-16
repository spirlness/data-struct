#include<iostream>
using namespace std;
#define MAXSIZE 100
typedef int ElemType;
typedef struct
{
    ElemType data[MAXSIZE];
    int length;}SqList;
void InitList(SqList &L);

void InitList(SqList &L) //初始化顺序表
{
    L.length=0;
}

bool ListInsert(SqList &L,int i,ElemType e){
    if(i<1||i>L.length+1)
        return false;
    for(int j=L.length;j>=i;j--)
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
    return true;
}
bool ListDelete(SqList &L, int i, ElemType &e) {
    if(i<1||i>L.length)
        return false;
    for(int j=i;j<L.length;j++)
        L.data[j-1]=L.data[j];
    L.length--;
    return true;
}
int main(){
    SqList L;
    InitList(L);
    ListInsert(L,1,1);
    ListInsert(L,2,2);
    ListInsert(L,3,3);
    ListInsert(L,4,4);
    ListInsert(L,5,5);
    ListInsert(L,6,6);
    ListInsert(L,7,7);
    ListInsert(L,8,8);

cout<<L.length<<endl;
cout<<L.data<< endl;


}