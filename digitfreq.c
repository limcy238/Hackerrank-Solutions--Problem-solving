#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char s[1000];
	scanf("%[^\n]%*c",s);
	int a[10]={0};
	for(int i=0;s[i]!='\n';++i)
		if(isdigit(s[i]))
		{
			int x=atoi(s[i]);
			++a[x];
		}
	for(int i=0;i<10;++i )
		cout<<a[i]<<" ";		
	return 0;
}

