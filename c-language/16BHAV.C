//wap to find area of rectengal
#include<stdio.h>
#include<conio.h>
main()
{
	float l,w,a;
	clrscr();
	printf("Enter the lenth of rectengal:-");
	scanf("%f",&l);
	printf("Enter the width of rectengal:-");
	scanf("%f",&w);
	a=l*w;
	printf("The area of rectengal is :-%f",a);
	getch();
}