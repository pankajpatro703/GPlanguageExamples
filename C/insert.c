//INSERT ELEMENT
#include<stdio.h>
void main()
{
	int i,a[50],n,pos,item;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter new element to be inserted: ");
	scanf("%d",&item);
	printf("Enter position of new element: ");
	scanf("%d",&pos);
	for(i=n-1;i>=pos-1;i--)
		a[i+1]=a[i];
	a[pos-1]=item;
	printf("New array is:\n");
	for(i=0;i<=n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
