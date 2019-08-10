#include<bits/stdc++.h>
using namespace std;
int reverse(int num)
{
	int rev=0;
	while(num>0)
	{
		rev=rev*10+num%10;
		num=num/10;
	}
	return rev;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int i,j,k;
	cin>>i>>j>>k;
	int count=0;
	for(int x=i;x<=j;++x)
	{
		int rev=reverse(x);
		if(abs(x-rev)%k==0)
			++count;
		//cout<<x<<" "<<rev<<" "<<abs(x-rev)%k<<"\n";
	}
	cout<<count;
	return 0;
}
