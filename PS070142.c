#include <stdio.h>
int main(void)
{
	int n,m,i,j,k=0;
	scanf("%d%d",&n,&m);
	for(i=1;i<=m%7;i++) //�L�X����e�����ť� 
	{
		printf("   ");
		k++;     //�p��ťեX�{�X�� 
	}
 
	
	for(j=1;j<=n;j++) //�L�X��� 
	{
		if(k==7)
		{
			printf("\n");
			k=0;
		}
		printf("%2d ",j);
		k++;
	}

	return 0;
} 
