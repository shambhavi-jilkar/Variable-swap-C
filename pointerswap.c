#include<stdio.h>
void swapByR(int *, int *);
void swapByV(int, int);
void main()
{
	int ch,a=3,b=5;
	int *p,*q;
	p=&a;
	q=&b;
	printf("A=%d\tB=%d\n",a,b);
	printf("\n1. call by reference");
	printf("\n2. call by value");
	printf("\nEnter choice");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			swapByR(p,q);
			printf("--In main--");
			printf("\nA=%d\tB=%d\n",a,b);
			break;
		case 2:
			swapByV(a,b);
			printf("--In main--");
			printf("\nA=%d\tB=%d\n",a,b);
			break;
		default:
			printf("Wrong choice");
		}
}
void swapByR(int *a,int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("\n--in function--");
	printf("\nA=%d\tB=%d\n",*a,*b);
}
void swapByV(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n--in function--");
	printf("\nA=%d\tB=%d\n",a,b);
}
