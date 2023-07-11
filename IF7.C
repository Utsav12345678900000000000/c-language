#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter A");
	scanf("%d",&a);
	printf("Enter B");
	scanf("%d",&b);
	printf("Enter C");
	scanf("%d",&c);
	if(a>b&&a>c)
	{
	printf("A is big");
	}else
	{
	printf("A is small");
	}
	getch();

}