#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n, k, q;
	cin>>n>>k>>q;
	int a[n];
	for(int i = 0; i < n;++i)
		cin>>a[i];
	k %= n;
	for(int i = 0; i < q; ++i)
	{
		int x;
		cin>>x;
		cout<<a[(n-k+x)%n]<<"\n";
	}
    return 0;
}
