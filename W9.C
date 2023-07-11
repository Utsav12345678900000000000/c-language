#include<stdio.h>
#include<conio.h>
void main()
{
	char a;
	clrscr();
	a=0;
	while(a<26)
	{
		printf("%c=%d\t",'A'+a,'A'+a);
		a++;
	}
	getch();
}