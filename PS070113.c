#include <stdio.h>
int main(void)
{
	int n,i,j=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		j++;
	}

	printf("%d",j);
	
	return 0;
}
