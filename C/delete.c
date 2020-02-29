//DELETE ELEMENT
#include<stdio.h>
void main()
{
	int i,a[50],n,pos;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter position of element to be deleted: ");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
		a[i]=a[i+1];
	printf("New array is:\n");
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("\n");
}
