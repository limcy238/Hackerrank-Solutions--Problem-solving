#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,k;
	cin>>n>>k;
	int a[n],sum=0;
	for(int i=0;i<n;++i)
		cin>>a[i];
	sort(a,a+n);
	int count=0;
	for(int i=0;i<n;++i)
	{
		if(a[i]<k)
		{
			a[i+1]=a[i]*1+a[i+1]*2;
			a[i]=0;
			++count;
			sort(a,a+n);
		}
		else
			break;
	}
	if(a[count]>=k)
		cout<<count;
	else
		cout<<"-1\n";
	return 0;
}
