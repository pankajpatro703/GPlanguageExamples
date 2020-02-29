#include<stdio.h>
void swap(int *,int *);
void main()
{
	int a,b;
	printf("Call by address\n");
	printf("Enter 2 numbers: ");
	scanf("%d %d",&a,&b);
	printf("Before calling:\n");
	printf("A:%d B:%d\n",a,b);
	swap(&a,&b);
	printf("After calling:\n");
	printf("A:%d B:%d \n",a,b);
}

void swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
