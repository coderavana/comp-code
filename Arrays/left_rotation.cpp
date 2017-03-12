#include<iostream>
#include<vector>
using namespace std;
int main(void)
{
	long int i,n,d,no,count = 0,pos;
	
	cin>>n>>d;
	
	vector <int> a;
	
	for(i=0;i<n;i++)
	{
		cin>>no;
		a.push_back(no);
	}
	
	d = d%n;
	pos = d;
	
	while(count<n)
	{
		cout<<a[pos%n]<<" ";
		pos++;
		count++;
	}
	
	return 0;
}
