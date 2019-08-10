#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n,t;
    cin>>n>>t;
    int width[n];
	for (int i=0;i<n;++i) 
        cin>>width[i];
    for (int i=0;i<t;++i)
	{
        int l, r;
        cin>>l>>r;
		int res=width[l];
        while(l<=r) 
		{
            res=(res<width[l])?res:width[l];
            ++l;
        }
        cout<<res<<"\n";
    }

    return 0;
}
