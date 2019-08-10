#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,c,m;
	for(cin>>t;t--;)
	{
		cin>>n>>c>>m;
		int total=n/c;
		int wrappers=total;
		while(wrappers>=m)
		{
			int w=wrappers/m+wrappers%m;
			total+=wrappers/m;
			wrappers=w;
		}
		cout<<total<<"\n";
	}
	return 0;
}
