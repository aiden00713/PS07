#include <stdio.h>
int main(void)
{
	int n,i,b;
	scanf("%d",&n);
	for(i=1;n%i==0;i++)
	{
		if(n%i==0 && i>=2)
		{
			printf("%d",i);
			break;
		}
		else
		{
			printf("1");
			break;
		}
    }
    return 0;
}
