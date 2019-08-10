#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n;
	for(cin>>t;t--;)
	{
		cin>>n;
		int height=1;
		for(int i=1;i<=n;++i)
		{
			if(i%2)
				height*=2;
			else
				++height;
		}
		cout<<height<<"\n";
	}
	return 0;
}
