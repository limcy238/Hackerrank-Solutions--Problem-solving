#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n],jump=1;
	for(int i=0;i<n;++i)
		cin>>a[i];
	for(int i=0;i<(n-3);)
	{
		if(a[i+2]==0)
		{
			++jump;
			i+=2;
		}
		else if(a[i+1]==0)
		{
			++jump;
			++i;
		}
	}
	cout<<(jump);
	return 0;
}
