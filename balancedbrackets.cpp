#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	string s;
	for(cin>>n;n--;)
	{
		cin>>s;
		int l=s.length(),top=-1;
		char stack[l];
		//bool b=false;
		for(int i=0;i<l;++i)
		{
			if(top==-1)
			{
				stack[++top]=s[i];
				//cout<<stack[top]<<" "<<top<<"\n";
			}
			else
			{
				if(stack[top]=='(' and s[i]==')')
					--top;
				else if(stack[top]=='[' and s[i]==']')
					--top;
				else if(stack[top]=='{' and s[i]=='}')
					--top;
				else
					stack[++top]=s[i];
					//cout<<stack[top]<<" "<<top<<"\n";
			}
		}
		if(top==-1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
