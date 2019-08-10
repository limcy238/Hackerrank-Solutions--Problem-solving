#include<bits/stdc++.h>
using namespace std;
void EE(int a, int b, int& x, int& y)
{
    if(a%b == 0)
    {
        x=0;
        y=1;
        return;
    }
    EE(b,a%b,x,y);
    int temp = x;
    x = y;
    y = temp - y*(a/b);
}
int modInverse(int a, int m)
{
    int x,y;
    EE(a,m,x,y);
    if(x<0) x += m;
    return x;
}
int check(int x) 
{   
	double sr = sqrt(x); 
	if((sr-floor(sr))==0) 
		return 1;
	else
		return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,a,m;
	for(cin>>t;t--;)
	{ 
		cin>>a>>m;
		int xs=modInverse(a,m);
		cout<<xs<<"\n";
		/*int ch=check(xs);
		if(ch==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
			*/
	
	}
	return 0;	
}
