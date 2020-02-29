#include<stdio.h>
#define SIZE 10
void main()
{
	int a[SIZE],*ptr,i,n;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	ptr=a+n-1;
	printf("Elements in reverse order are:\n");
	for(i=0;i<n;ptr--,i++)
		printf("%d ",*ptr);
	printf("\n");
}
