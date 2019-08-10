#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n],min=INT_MAX;
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		if(a[i]<=min)
			min=a[i];
	}
	int count=n,min1=min;
	for(int j=0;j<n;++j)
	{
		cout<<count<<"\n";
		min1=min;
		for(int i=0;i<n;++i)
		{
			if(a[i]!=0)
			{
			a[i]-=min1;
			if(a[i]==0)
				--count;
			}
		}
		min=INT_MAX;
		for(int k=0;k<n;++k)
			if(a[k]<=min and a[k]!=0)
				min=a[k];
		if(count==0)
			break;
	}
	return 0;
}
