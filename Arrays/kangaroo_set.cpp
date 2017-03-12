#include<iostream>
using namespace std;
int allocate(int[],int, int);
int main(void)
{
    int n,a[50];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n%2==0)
        allocate(a,n-1,0);
    else
        allocate(a,n-2,1);

    return 0;
}
int allocate(int b[],int n2,int flag)
{
    int str=0,endp,c[50],j;
    if(flag==0)
    {
        endp=n2;
    for(j=0;j<=n2;j++)
    {
        if(j%2==0)
            c[str++]=b[j];
        else
            c[endp--]=b[j];
    }
    for(j=0;j<=n2;j++)
        cout<<c[j]<<" ";
    }
    else if(flag==1)
    {
        endp=n2+1;
         for(j=0;j<=n2;j++)
        {
        if(j%2==0)
            c[str++]=b[j];
        else
            c[endp--]=b[j];
        }
        c[str]=b[j];
        for(j=0;j<=n2+1;j++)
        cout<<c[j]<<" ";
    }
    return 0;
}
