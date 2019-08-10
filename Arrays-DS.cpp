#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;++i)
		cin>>a[i];
	for(i=n-1;i>=0;--i)
		cout<<a[i]<<" ";
	return 0;
}
