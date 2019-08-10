#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int p;
	for(cin>>p;p--;)
	{
		string s1,s2;
		cin>>s1>>s2;
		int flag=0;
		int a[26]={0};
		int b[26]={0};
		for(int i=0;i<s1.length();++i)
		{
			++a[s1[i]-97];
		}
		for(int i=0;i<s2.length();++i)
		{
			++b[s2[i]-97];
		}
		for(int i=0;i<26;++i)
		{
			if(a[i]>0 and b[i]>0)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";		
	}
	return 0;
}
