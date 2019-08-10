#include<bits/stdc++.h>
using namespace std;
int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n, k;
    cin>>n>>k;
    int num, special = 0, page = 0;
    for(int i=0;i<n;++i) 
	{
    	cin>>num;
    	++page;
    	int p=1;
    	while(num > 0) 
		{
    		--num;
    		if(p==page)
    			++special;
    		if(p%k == 0 and num!= 0) 
    			++page;
    		++p;
     	}
    }
    cout<<special;
    return 0;
}
