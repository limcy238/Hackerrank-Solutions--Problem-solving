#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string a,b;
	cin>>a>>b;
	cout<<a.length()<<" "<<b.length()<<"\n";
	cout<<a<<b<<"\n";
	cout<<b[0]<<a.substr(1,a.length())<<" "<<a[0]<<b.substr(1,b.length());
	return 0;
}
