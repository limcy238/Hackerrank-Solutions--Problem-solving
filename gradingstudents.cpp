#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		if(a[i]<38)
			cout<<a[i]<<"\n";
		else
		{
		if(a[i]%5)
		{
			if(a[i]%5>=3)
				cout<<(a[i]+(5-a[i]%5))<<"\n";
			else
				cout<<(a[i])<<"\n";
		}
		else
			cout<<a[i]<<"\n";
		}
	}
	return 0;
}
