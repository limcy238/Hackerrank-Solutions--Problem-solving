#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int q;
	for(cin>>q;q--;)
	{
		string s;
		cin>>s;
		int count=0;
		int l=s.length();
		for(int i=0;i<l;++i)
		{
			if(count==0 and s[i]=='h')
				++count;
			else if(count==1 and s[i]=='a')
				++count;
			else if(count==2 and s[i]=='c')
				++count;
			else if(count==3 and s[i]=='k')
				++count;
			else if(count==4 and s[i]=='e')
				++count;
			else if(count==5 and s[i]=='r')
				++count;
			else if(count==6 and s[i]=='r')
				++count;
			else if(count==7 and s[i]=='a')
				++count;
			else if(count==8 and s[i]=='n')
				++count;
			else if(count==9 and s[i]=='k')
				++count;
			if(count==10)
				break;
		}
		if(count==10)
			cout<<"YES\n";
		else
			cout<<"NO\n";
		
	}
	return 0;
}
