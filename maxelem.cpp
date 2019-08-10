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
	int top=-1,max=0;
	for(int i=0;i<n;++i)
	{
		int q;
		cin>>q;
		if(q==1)
		{
			cin>>a[++top];
			if(a[top]>=max)
				max=a[top];			
		}
		if(q==2)
		{

				if (max==a[top])
				{
					--top;
					max = 0;
					int j=top;
					while (j!=-1)
					{
						max = a[j] >= max ? a[j] : max;
						--j;
					}
				}
				else
					--top;
		}
		if(q==3)
			cout<<max<<"\n";
	}
	return 0;
}
