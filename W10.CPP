#include<stdio.h>
#include<conio.h>
void main()
{
	char c;
	clrscr();
	c=65;
	do
	{
		printf("%c-%c\t ",c,c+32);
		++c;
	}
	while(c<=90);
	getch();
}