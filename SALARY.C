#include<stdio.h>
#include<conio.h>
void main()
{
	float b,n;
	clrscr();
	printf("enter salary");
	scanf("%f",&b);
	if(b<=5000)
	{
		n=b+(b*0.08)+(b*0.20);
		printf("net salary: %f",n);
	}
	else if(b>5000&&b<=10000)
	{
		n=b+(b*0.12)+(b*0.30);
		printf("net salary: %f",n);
	}
	else if(b>1000&&b<=1500)
	{
		n=b+(b*0.15)+(b*0.40);
		printf("net salary: %f",n);
	}
	else
	{
		n=b+(b*0.20)+(b*0.50);
		printf("net salary: %f",n);
	}
	getch();
}                         +