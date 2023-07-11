#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	c='A';
	do
	{
		printf("%c\t",c);
		++c;
	}
	while(c<='Z');
	getch();



}