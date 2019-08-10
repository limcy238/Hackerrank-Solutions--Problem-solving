#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n,q;
    cin>>n>>q;
    vector<int> a[n];
    int last=0;
    for(int i=0;i<q;++i)
	{
        int type,x,y;
        cin>>type>>x>>y; 
        int pos = (x^last)%n;
        if(type==1) 
		{
                a[pos].push_back(y);
        }
        else if(type == 2)
		{
                int k = y%((int)a[pos].size());
                last=a[pos][k];
                cout<<last<<"\n";
        }
    }
    return 0;
}
