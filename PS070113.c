#include <stdio.h>
int main(void)
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	if(n%i==0)
	j++;
	printf("%d",j-1);
	
	return 0;
}
