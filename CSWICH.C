#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("1-addition");
	printf("\n2-subttraction");
	printf("\n3-multiplicatin");
	printf("\n4-division");
	printf("\n5-modulas");
	printf("\nenter your choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		c=a+b;
		printf("ans:%d",c);
		break;
		case 2:
		c=a-b;
		printf("ans:%d",c);
		break;
		case 3:
		c=a*b;
		printf("ans:%d",c);
		break;
		case 4:
		c=a/b;
		printf("ans:%d",c);
		break;
		case 5:
		c=a%b;
		printf("ans:%d",c);
		break;
		default:
		printf("enter valid num.");
	}
	getch();



}