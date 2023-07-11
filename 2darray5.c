#include<stdio.h>
int main()
{
	int a[3][3]={10,20,30,40,50,60,70,80,90};
	int i,j,sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d  ",a[i][j]);
		}
	printf("\n");
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i<=j)
			{
				sum+=a[i][j];
			}
		}

	}
	printf("total : %d\n",sum);
	return 0;
}