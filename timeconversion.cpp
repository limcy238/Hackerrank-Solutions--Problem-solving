#include<bits/stdc++.h>
using namespace std;
int  main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin>>s;
	if(s.substr(8,9)=="AM")
	{
		int x=stoi(s.substr(0,2));
		if(x==12)
			cout<<"00"<<s.substr(2,6);
		else
			cout<<s.substr(0,8);
	}
	else
	{
		int x=stoi(s.substr(0,2));
		if(x==12)
			cout<<s.substr(0,8);
		else
			cout<<(x+12)<<s.substr(2,6);
	}
	return 0;
}
