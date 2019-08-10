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
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		int inv_num=0; 
		//inversion number computation 
		//sorted array has inversion number =0
		for(int i=0;i<n;++i)
			for(int j=i+1;j<n;++j)
				if(a[i]>a[j])
					++inv_num;
		if(inv_num%2)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
	return  0;
}
