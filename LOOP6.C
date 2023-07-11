#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("enter a:");
	scanf("%d",&b);
	printf("\n odd num between 1 to %d are : \n ",b);
	for(a=1;a<=b;a+=2)
	{
		printf("%d\n",a);
	}
	getch();



}