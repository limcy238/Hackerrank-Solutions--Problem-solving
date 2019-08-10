#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,a,b;
	for(cin>>t;t--;)
	{
		cin>>a>>b;
		int a1=ceil(sqrt(a));
		int b1=sqrt(b);
		//cout<<a1<<" "<<b1<<" ";
		cout<<(b1-a1+1)<<"\n";
	}
	return 0;
}
