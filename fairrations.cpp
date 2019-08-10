#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
		cin>>a[i];
	int count=0;
	for(int i=0;i<n-1;i++)
    	{
        if(a[i]%2==1)
        {
            ++a[i];
            ++a[i+1];
			count+=2;
        }
    }
    int flag=0;
    for(int i=0;i<n;++i)
    	if(a[i]%2)
    	{
			flag=1;	
			break;
		}
	if(flag==0)
		cout<<count;
	else
		cout<<"NO";
	return 0;
}
