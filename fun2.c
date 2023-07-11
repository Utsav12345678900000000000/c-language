#include<stdio.h>

int perfect(int num)
{
	int n,sum=0,i;
	n=num;
	for(i=1;i<n;i++)
	{
		if(num%i==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
	}
	if(num==sum)
		printf("%d is perfect number",num);
	else
		printf("%d is not perfect number",num);
}
int main()
{
	int num;
	printf("enter number");
	scanf("%d",&num);
	perfect(num);

}