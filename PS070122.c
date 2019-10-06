#include <stdio.h>
int main(void)
{
	int n,i,j=0;
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			printf("NO");
			break;
		}
		else if(n%i>0)
		{
			printf("YES");
			break;
		}
	}
	
	
	return 0;
}
