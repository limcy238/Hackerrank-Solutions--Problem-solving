#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,m;
	cin>>n>>m;
	int k,a,b;
	long int arr[n+1]={0},max,sum;
	for(int i=0;i<m;++i)
	{
		cin>>a>>b>>k;
		arr[a-1]+=k;
		arr[b]-=k;
	}
	max=0,sum=0;
	for (int i=0;i<=n;++i)
	{
        sum+=arr[i];
        max=(sum>=max)?sum:max;
    }
    cout<<max;
	return 0;
}
