#include<stdio.h>
#include<conio.h>
void main()
{
	int birthofyear,year;
	clrscr();
	printf("enter birth of year");
	scanf("%d",&birthofyear);
	year=2023-birthofyear;
	if(year>18){
		printf("you are Elibale for voting");
	}
	else
	{
		printf("you are not Elibal for voting");
	}
	getch();
}