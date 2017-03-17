#include<iostream>
using namespace std;
int main(void)
{
    int h,k,num,maxn=0;
    cin>>h;
    cin>>num;
    if(num>k)
        maxn=num;
    else
        maxn=k;
    for(int i=1;i<h;i++)
    {
        cin>>num;
        if(num>maxn)
            maxn=num;
    }
    cout<<maxn-k;
}
