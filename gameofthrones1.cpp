#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<s.length();++i)
		++a[s[i]-97];
	//for(int i=0;i<26;++i)
		//cout<<a[i];
	int even=0,odd=0;
	for(int i=0;i<26;++i)
	{
		if((a[i]%2)==0)
			++even;
		else
			++odd;
	}
	if(odd==0 or odd==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
	return 0;
}
