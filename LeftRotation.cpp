#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,d;
	cin>>n>>d;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	for(int i=d;i<n;++i)
		cout<<a[i]<<" ";
	for(int i=0;i<d;++i)
		cout<<a[i]<<" ";	
	return 0;
}
