#include <stdio.h>
int main(void)
{
	int n,i=0;
	scanf("%d",&n);
	for(;n>=10;n/=10)
	;
	printf("%d",n);
	return 0;
}
