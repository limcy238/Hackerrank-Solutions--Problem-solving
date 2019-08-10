#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    long int n;
    cin >> n;
    long int count = 0;
    int l=s.length();
    for(int i = 0; i < l; i++) 
	{
    	if(s[i] == 'a')
    		++count;
    }
    long int occ = (n/l)*count;
    for(int i = 0; i < n%l; i++)
	{
    	if(s[i] == 'a')
    		++occ;
    }
    cout<<occ;
    return 0;
}
