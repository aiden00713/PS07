#include <stdio.h>
int main(void)
{
	int n,i,j,k=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=2;j<i;j++) //�P�_��� 
		{
			if(i%j==0)
			{
				k++;
			}
		}
		
		if(i==1)  //�]��1���O��� 
		{
			k=1;
		}
		
		if(i==2)  //2�O��Ʀ��P�_�|���O 
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
