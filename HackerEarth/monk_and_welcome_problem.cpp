#include<iostream>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int a[100000],b[100000],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
    {
        cin>>b[j];
        cout<<a[j]+b[j]<<" ";
    }
    return 0;
 }
