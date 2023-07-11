#include<stdio.h>
#include<conio.h>
void main()
{
	float a,rupees;
	clrscr();
	printf("Enter Unit");
	scanf("%f",&a);
	if(a<200)
	{
		rupees=((a*60)/100)+50;
		printf("Chargr=%f",rupees);
	}
	else if(a<=300)
	{
		rupees=((a*80)/100)+50;
		printf("charge=%f",rupees);
	}
	else if(a>=300)
	{
		rupees=((a*90)/100)+50;
		printf("Charge=%f",rupees);
	}
	if (rupees>300)
	{
	printf("\n Total amount=%f",rupees+(rupees*15/100));
	}
	else
	{
	printf("\n Total amount=%f",rupees);
	}
	getch();

}