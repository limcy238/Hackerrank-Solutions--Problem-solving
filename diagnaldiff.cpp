#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n][n],d1=0,d2=0;
	for(int i=0;i<n;++i)
	{
		for(int j=0;j<n;++j)
		{
			cin>>a[i][j];
			if(i==j)
			{	
				//cout<<a[i][j]<<" ";
				d1+=a[i][j];
			}
			if(j==n-i-1)
			{
				//cout<<a[i][j]<<" ";
				d2+=a[i][j];
			}
		}//cout<<"\n";
	}
	cout<<abs(d1-d2);
	return 0;
}
