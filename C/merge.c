//MERGE 2 ARRAYS
#include<stdio.h>
void main()
{
	int a[50],n,m,i,b[25],c[25];
	printf("Array 1\nEnter no. of elements: ");
	scanf("%d",&m);
	printf("Enter elements:\n");
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);
	printf("Array 2\nEnter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&c[i]);
	for(i=0;i<m;i++)
		a[i]=b[i];
	for(i=0;i<n;i++)
		a[i+m]=c[i];
	printf("Merged array is:\n");
	for(i=0;i<m+n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
