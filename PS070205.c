#include <stdio.h>
int main(void)
{
	int n,i,j,k,l=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)  //¦L¥X´X¦æ 
	{
		for(j=1;j<n*2;j++)
		{
			if(i+j==n+1 || j==n+i-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
