#include <stdio.h>
int main(void)
{
	int n,i,j=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(j<=n)
		{
			printf("%d ",j);
			j+=i;
		}
	}
	return 0;
}
