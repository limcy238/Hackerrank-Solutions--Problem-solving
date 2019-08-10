#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,q;
	int **a;
	cin>>n>>q;;
	a=new int*[n];
	for(int i=0;i<n;++i)
	{
		int x;
		cin>>x;
		a[i]=new int[x];
		for(int j=0;j<x;++j)
			cin>>a[i][j];
	}
	for(int i=0;i<q;++i)
	{
		int x,y;
		cin>>x>>y;
		cout<<a[x][y]<<"\n";
	}
	
	return 0;
}
