#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    int t,n,k,mi,num;
    cin>>t;
    vector<int> vec;
    while(t--)
    {
        cin>>n>>k;
        mi=k;
        for(int i=0;i<n;i++)
        {
            cin>>num;
            if(num<mi)
                mi = num;
        }
        printf("%d",k-mi);
        printf("\n");
    }
    return 0;
}
