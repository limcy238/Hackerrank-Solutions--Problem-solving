#include<bits/stdc++.h>
using namespace std;
int getMax(int l, int r)
{
    int ans = 0;
    if(r-l == 1) 
		return 0;
    for(int i=l+1;i<r;++i){
        ans = max(ans,min(i-l , r-i));
    }
    return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n,m;
    cin >> n >> m;
    int c[m];
    for(int i = 0;i < m;i++)
	{
       cin >> c[i];
    }
    sort(c,c+m);
    int l = 0,r = 0,ans=c[0];
    for(int i=1;i<m;i++){
        l = c[i-1];
        r = c[i];
        ans = max(ans , getMax(l,r));
    } 
    cout<<max(ans,n-c[m-1]-1)<<endl;
    return 0;
}

