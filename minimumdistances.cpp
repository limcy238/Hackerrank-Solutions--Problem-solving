#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    int n,a[100000],j,m=0,k[10],max=0,flag=0;;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<n;++i)
	{
        for(int j=i+1;j<n;j++)
		{
            if(a[i]==a[j])
			{
                k[m]=abs(i-j);
                m=m+1;
            }
        }     
    }
    max=k[0];
    for(int i=0;i<m;i++)
	{  
        if(k[i]<=max)
		{
            max=k[i];
            flag=1;
        }       
    }
    if(flag==0)
        cout<<"-1";
    else
    	cout<<max;
    return 0;

}
