//REPLACE ELEMENT FROM ARRAY
#include<stdio.h>
void main()
{
	int i,a[50],n,item,pos;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter new element: ");
	scanf("%d",&item);
	printf("Enter position of element to be replaced: ");
	scanf("%d",&pos);
	a[pos-1]=item;
	printf("New array is :\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
