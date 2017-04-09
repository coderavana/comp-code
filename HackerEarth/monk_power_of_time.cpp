#include<iostream>
#include<queue>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false);
	int n,num,time=0,found=0,tofind;
	queue<int> a;
	queue<int> b;
	cin>>n;
	for(int i=0;i<n;i++) //calling
		{
			cin>>num;
			a.push(num);
		}

	for(int j=0;j<n;j++) //ideal
		{
			cin>>num;
			b.push(num);
		}

	for(int k=0;k<n;k++)
	{
		while(found!=1)
		{
			tofind = b.front();
		}

		++time;
	}	
	cout<<time;
	return 0;
}