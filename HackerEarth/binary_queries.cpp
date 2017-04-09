#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,q,num;
    int a,b;
    cin>>n>>q;
    vector<int> vec;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        vec.push_back(num);
    }

    while(q--)
    {
        cin>>num;
        if(num==0)
        {
            cin>>a>>b;
            if(vec[b-1]==0)
                cout<<"EVEN"<<"\n";
            else
                cout<<"ODD"<<"\n";
        }
        else
        {
            cin>>num;
            vec[num-1]=!(vec[num-1]);
        }
    }
    return 0;
}
