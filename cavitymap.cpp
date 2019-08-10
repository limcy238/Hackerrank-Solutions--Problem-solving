#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    char a[n][n];
    for(int i=0;i<n;++i)
        for(int j=0;j<n;++j)
            cin>>a[i][j];
            
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<n;++j)
        {
            if(i==0 or i==n-1 or j==0 or j==n-1)
                cout<<a[i][j];
            else
            {
                if(a[i-1][j]<a[i][j] and a[i][j-1]<a[i][j] and a[i+1][j]<a[i][j] and a[i][j+1]<a[i][j])
                a[i][j]='X';
                cout<<a[i][j];
            }
        }
        cout<<"\n";
    }
    return 0;
} 

