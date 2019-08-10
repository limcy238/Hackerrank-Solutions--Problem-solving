#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,q;
	
	cin>>n;
	string str[n];
	for(int i=0;i<n;++i)
		cin>>str[i];
		
	cin>>q;
	string que[q];
	for(int i=0;i<q;++i)
		cin>>que[i];
		

	int vec[q]={0};
	int i,j;
	for(i=0;i<q;++i)
	{
		for(j=0;j<n;++j)
		{
			if(que[i].length()==str[j].length())
			{
				//cout<<"Hello"<<i<<j;
				int len=que[i].length(),count=0;
				for(int k=0;k<len;++k)
				{
					if(que[i][k]!=str[j][k])
						break;
					else
						++count; 
				}
				if(count==len)
					++vec[i];
			}
		}
	}
	for(i=0;i<q;++i)
		cout<<vec[i]<<"\n";
	return 0;
}
