
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n,a,sum=0;
	clrscr();
	printf("enter n");
	scanf("%d",&n);
	a=1;
	do
	{
		sum+=a;
		printf("%d\t",a);
		a+=2;

	}
	while(a<=n);
	printf("\nsum: %d",sum);
	getch();
}