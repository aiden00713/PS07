#include <stdio.h>
int main(void)
{
	int n,m,i=1;
	scanf("%d%d",&n,&m);
	for(i=1;;i++)
	{
		if(i%n==0 && i%m==0)
		{
			printf("LCM(%d,%d)=%d",n,m,i);
			break;
		}
	}
	return 0;
}
