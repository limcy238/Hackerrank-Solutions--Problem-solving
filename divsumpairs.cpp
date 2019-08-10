#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	int count=0;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			if(i<j and (a[i]+a[j])%k==0)
				++count;
		}
	}
	cout<<count;
	return 0;	
}
