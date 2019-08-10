#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int i,j;
    for(i = n; i >= 1; i--)
	{
        for(j = n; j > i; j--)
            printf("%d ", j);
        for(j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i);
        for(j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    
    for(i = 1; i < n; i++){
        for(j = n; j > i; j--)
            printf("%d ", j);
        for(j = 1; j <= 2 * i - 1; j++)
            printf("%d ", i + 1);
        for(j = i + 1; j <= n; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
