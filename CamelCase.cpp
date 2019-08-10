#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	int count=1;
	for(int i=0;i<s.length();++i)
	{
		if(s[i]>='A' and s[i]<='Z')
			++count;
	}
	cout<<count;
	return 0;
}
