#include<iostream>
#include<cmath>
using namespace std;
int main(void)
{
    int q,a,b,c;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>a>>b>>c;
        if(abs(a-c)==abs(b-c))
            cout<<"Mouse C"<<"\n";
        else
            (abs(a-c)>abs(b-c))?cout<<"Cat B \n":cout<<"Cat A\n";
    }
}
