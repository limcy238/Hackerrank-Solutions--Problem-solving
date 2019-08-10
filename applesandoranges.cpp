#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int s,t,aloc,bloc,m,n;
	cin>>s>>t;
	cin>>aloc>>bloc;
	cin>>m>>n;
	int a[m],b[n];
	int apple=0,orange=0;
	for(int i=0;i<m;++i)
	{
		cin>>a[i];
		if(a[i]>=0 and (aloc+a[i])>=s and (aloc+a[i])<=t)
			++apple;
	}
	for(int i=0;i<n;++i)
	{
		cin>>b[i];
		if(b[i]<=0 and (bloc+b[i])>=s and (bloc+b[i])<=t)
			++orange;		
	}
	cout<<apple<<"\n"<<orange;
	return 0;
}
