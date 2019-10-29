#include <stdio.h>
int main(void)
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=2;j<i;j++) //判斷質數 
		{
			if(i%j==0)
			{
				k++;
			}
		}
		
		if(i==1)  //因為1不是質數 
		{
			k=1;
		}
		
		if(i==2)  //2是質數但判斷會當不是 
		{
			k=0;
		}
		
		if(k==0)
		{
			printf("%d ",i);
			k=0;
		}
		else
		{
			k=0;
		}
	}
 } 
