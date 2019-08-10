#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	long int n;
	for(cin>>t;t--;)
	{
		cin>>n;
		long int num=n;
		long int count=0;
		int rem;
        while(num%10!=num)
            {
            rem=num%10;
            num=num/10;
            if(rem==0)
                continue;
            else if(n%rem==0)
                ++count;
        }
        if(num!=0 && n%num==0)
            ++count;
		cout<<count<<"\n";
	}
	return 0;
}
