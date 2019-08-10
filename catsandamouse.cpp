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
		int x,y,z;
		cin>>x>>y>>z;
		if(abs(x-z)<abs(y-z))
			cout<<"Cat A\n";
		else if(abs(x-z)>abs(y-z))
			cout<<"Cat B\n";
		else if(abs(x-z)==abs(y-z))
			cout<<"Mouse C\n";
	}
	return 0;
}
