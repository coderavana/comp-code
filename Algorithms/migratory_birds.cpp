#include<iostream>
using namespace std;
int main(void)
{
    long int n,num;
    int maxi=0,pos;
    int carr[5] = {0};
    cin>>n;
    int i=0;
    while(i<n)
    {
        cin>>num;
        i++;
        if(num==1)
            ++carr[0];
            else if(num==2)
                ++carr[1];
            else if(num==3)
                ++carr[2];
                else if(num==4)
                    ++carr[3];
                    else if(num==5)
                        ++carr[4];

    }
    for(int j=0;j<5;j++)
    {
        if(carr[j]>maxi)
            {
            maxi=carr[j];
            pos=j;
            }
    }
    cout<<pos+1;
}
