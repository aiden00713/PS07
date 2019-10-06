#include <stdio.h>
int main(void)
{
	int n,m,i,j;
	scanf("%d",&n);
	printf("ANS=");
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			
			printf("%d ",i);
		}
	}
	 return 0;
}
