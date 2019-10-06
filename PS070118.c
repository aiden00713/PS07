#include <stdio.h>
int main(void)
{
	int n,i,sum;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("%d",sum-1);
	return 0;
}
