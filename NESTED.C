#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter A value:");
	scanf("%d",&a);
	if(a>0)
	{
	  printf("A is positive");
	}else
	{
	   if(a<0)
	   {
	   printf("A is nagative");
	   }else
	   {
	   printf("A is zero");
	   }
	}
	getch();





}