#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
    long int n,d,i,num,pos;
    cin>>n>>d;
    vector <long int> a(n,-1);
    d = d%n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        pos = i-d;
        if(pos<0)
        {
            pos = pos + n;
            a[pos]=num;
        }
        else
            a[pos]=num;
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
