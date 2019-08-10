#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int x1,x2,v1,v2;
   cin>>x1>>v1>>x2>>v2;
    if(v2 < v1)
    {
		if((x2-x1)%(v1-v2))
			cout<<"NO\n";
		else
			cout<<"YES\n";
    }
    else
    	cout<<"NO\n";
	return 0;
}
