#include <stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			if(i%3==0)
			{
				printf("* ");
			}
			else
			{
				printf("%d ",i);
			}
	}
	return 0;
}
