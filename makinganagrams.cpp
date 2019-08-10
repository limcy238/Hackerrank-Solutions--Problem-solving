#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s1,s2;
	cin>>s1>>s2;
	int a[26]={0};
	int b[26]={0};
	for(int i=0;i<s1.length();++i)
		++a[s1[i]-97];
	for(int i=0;i<s2.length();++i)
		++b[s2[i]-97];
	int count=0;
	for(int i=0;i<26;++i)
	{
		if(a[i]!=b[i])
			count+=abs(a[i]-b[i]);
	}
	cout<<count;
	return 0;
}
