#include<stdio.h>
#include<conio.h>
void main()
{
	int year;
	clrscr();
	printf("Enter Year:");
	scanf("%d",&year);
	if(year%4==0)
	{
	printf("Leap Year");
	}else
	{
	printf("Been Leap Year");
	}
	getch();

}