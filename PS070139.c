#include <stdio.h>
int main(void)
{
	int n,m,i,j;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m%7;i++) //�L�X����e�����ť� 
	{
		printf("  ");
	}
	
	for(j=1;j<=n;j++) //�L�X��� 
	{
		printf("%2d ",j);
	}

	return 0;
} 
