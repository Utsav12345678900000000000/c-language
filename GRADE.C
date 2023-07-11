#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("Enter Velue");
	scanf("%d",&a);
	if(a>75)
	{
	printf("Grade A");
	}else if(a>=60 &&a<75)
	{
	printf("Grade B");
	}else if(a>=45 && a<60)
	{
	printf("Grade C");
	}else if(a>=35 && a<45)
	{
	printf("Grade D");
	}
	else
	{
	printf("fail");
	}
	getch();

}
























































