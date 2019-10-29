#include <stdio.h>
int main(void)
{
	int n,m,i,j,k=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m%7;i++) //印出日期前面的空白 
	{
		printf("   ");
		k++;     //計算空白出現幾次 
	}
 
	
	for(j=1;j<=n;j++) //印出日期 
	{
		if(k==7)
		{
			printf("\n");
			k=0;
		}
		printf("%2d ",j);
		k++;
	}

	return 0;
} 
