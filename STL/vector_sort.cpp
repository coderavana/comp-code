// Creating a vector array and then sorting it.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    int i,n,num;
    cin>>n;
    for (i=0;i<n;i++)
        {
        cin>>num;
        vec.push_back(num);
    }
    sort(vec.begin(),vec.end());
    for(int j=0;j<n;j++)
        {
        cout<<vec[j]<<" ";
    }
    return 0;
}
