#include<iostream>
using namespace std;
int main(void)
{
    int n,grade;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>grade;
        if(grade<38)
            cout<<grade<<"\n";
        else
        {
            if(grade%5>2)
            cout<<grade-grade%5+5<<"\n";
            else
                cout<<grade<<"\n";
        }
    }
}
