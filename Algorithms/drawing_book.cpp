#include<iostream>
using namespace std;
int main(void)
{
    int n,p,start=1;
    cin>>n>>p;
    if(p-start==n-p)
        cout<<(n-p)/2;
    else if(p-start<n-p)
        cout<<p/2;
    else
    {
        if(n%2==0)
            {
                n=n+1;
                cout<<(n-p)/2;
            }
            else
                cout<<(n-p)/2;
    }
}
