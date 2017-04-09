#include<iostream>
#include<vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	int n,x,num,c=0;
	vector <int> vec;
	cin>>n>>x;
	for(int i=0;i<n;i++)
	{
		cin>>num;
		vec.push_back(num);
	}
	int chance = 1;
	for(int j=0;j<n;j++)
	{
		if(chance>=0)
		{
		if(vec[j]<=x)
			c++;
		else
			--chance;
		}
		else if(chance<0)
			break;
	}
	cout<<c;
	return 0;
}