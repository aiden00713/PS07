#include <stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d",&n);
	for(j=1;j<=31;j++)
	{
		printf("%2d ",j);
		
		i++;
		if(i%n==0)
		{
			printf("\n");
		}
	}
	
	
	
	return 0;
}
