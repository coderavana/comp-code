#include<iostream>
using namespace std;
int main(void)
{
    int n,low_rec=0,high_rec=0,h_comp=0,l_comp=0;
    cin>>n;
    unsigned long int a[n];
    cin>>a[0];
    h_comp=a[0]; l_comp=a[0];
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>h_comp)
            {
            high_rec++;
            h_comp=a[i];
            }
        if(a[i]<l_comp)
        {
            low_rec++;
            l_comp=a[i];
        }
    }
    cout<<high_rec<<" "<<low_rec;
    return 0;
}
