#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int count=0,level=0;
	char s[n];
	for(int i=0;i<n;++i)
	{
		cin>>s[i];
		if(s[i]=='U')
		{
			if(level==-1)
			{
				++count;
				++level;
			}
			else
				++level;
		}
		else if(s[i]=='D')
			--level;
	}
	cout<<count;
	return 0;
}
