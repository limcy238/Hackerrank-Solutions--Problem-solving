#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	for(cin>>t;t--;)
	{
		int n,m,s;
		cin>>n>>m>>s;
		long int chair=((m+s-1)%n);
    	if (chair == 0)
			chair=n;
		cout<<chair<<"\n";
	}
	return 0;
}
