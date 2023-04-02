#include<bits/stdc++.h>
using namespace std;
#define Max 50
struct sqlist{
    int a[Max]={1,2,2,3,3,3,5,6,6,7};
    int length=10;
};

void deletelist(sqlist &L)
{
    int black=1;
    for(int red=1;red<L.length;red++)
    {
        if(L.a[red]!=L.a[red-1])
        {
            L.a[black]=L.a[red];
            black++;
        }
    }
    L.length=black;
}

int Delete_Same(sqlist &L){
    if(L.length == 0)
        return 0;
    int i,j;
    for ( i = 0,j = 1; j < L.length; j++)
    {
        if(L.a[i] != L.a[j])  L.a[++i] = L.a[j];
    }
            L.length = i+1;
        return 1;
    
}
int main()
{

    sqlist L;
    for(int i=0;i<L.length;i++) cout<<L.a[i]<<" ";
    cout<<endl;
    deletelist(L);
    for(int i=0;i<L.length;i++) cout<<L.a[i]<<" ";
    // sqlist R;
    // for(int i=0;i<L.length;i++) cout<<L.a[i]<<" ";
    // Delete_Same(R);
    // for(int i=0;i<L.length;i++) cout<<L.a[i]<<" ";

    return 0;
}