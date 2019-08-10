#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	float plus=0,minus=0,zero=0;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
		if(a[i]>0)
			++plus;
		if(a[i]==0)
			++zero;
		if(a[i]<0)
			++minus;
	}
	cout<<fixed<<(float)(plus/n)<<"\n"<<(float)(minus/n)<<"\n"<<(float)(zero/n);
	return 0;
}
