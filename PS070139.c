#include <stdio.h>
int main(void)
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m%7;i++) //印出日期前面的空白 
	{
		printf("  ");
	}
	
	for(j=1;j<=n;j++) //印出日期 
	{
		printf("%2d ",j);
	}

	return 0;
} 
