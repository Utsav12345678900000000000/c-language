#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,row=5;
	clrscr();
	for(a=1;a<=row;a++)
	{
		for(b=1;b<=row;b++)
		{
			if(b<=row-a)
			{
			printf(" ");
			}else
			{
			printf("* ");
			}
		}
		printf("\n");
	}
	getch();
}
