#include <stdio.h>
int main(void)
{
	int n,m,i,j,k=0,sum=0;;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m%7;i++)//找出首行空白有幾個 
	{
		k++;
	}
 
	
	for(j=1;j<=n;j++) //印出日期 
	{
		if(k==7)
		{
			printf("%d ",j-1);
			k=0;
		}
		k++;
	}

	return 0;
} 
