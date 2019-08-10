#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int x=n/2,y=m/2;
	if(n==1)
	{
		if(m%2==1)
			cout<<(m/2+1);
		else
			cout<<(m/2);
	}
	else if(m==1)
	{
		if(n%2==1)
			cout<<(n/2+1);
		else
			cout<<(n/2);
	}
	else
	{
		if(n%2==0 and m%2==0)
			cout<<(x*y);
	    if(n%2==1 and m%2==1)
			cout<<(x*y+x+y+1);
	    if(n%2==0 and m%2==1)
			cout<<(x*y+x);
		if(n%2==1 and m%2==0)
			cout<<(x*y+y);
	}
	return 0;
}
