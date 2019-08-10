#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int a[5];
	for(int i=0;i<5;++i)
		cin>>a[i];
	sort(a,a+5);
	long int sum=0;
	for(int i=0;i<5;++i)
	{
		sum+=a[i];
	}
	cout<<(sum-a[4])<<" "<<(sum-a[0]);
	return 0;
}
