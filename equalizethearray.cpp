#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	int hash[101]={0};
	cin>>n;
	int a[n];
	int max=INT_MIN;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		++hash[a[i]];
		if(hash[a[i]]>=max)
			max=hash[a[i]];
	}
	cout<<(n-max);
	return 0;
}
