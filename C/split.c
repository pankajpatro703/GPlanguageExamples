//SPLIT AN ARRAY
#include<stdio.h>
void main()
{
	int a[50],n,i,m,b[25],c[25];
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter no.of elements in 1st split array: ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
		c[i]=a[i+m];
	}
	printf("Splited arrays are:\n");
	for(i=0;i<m;i++)
		printf("%d ",b[i]);
	printf("\n");
	for(i=0;i<n-m;i++)
		printf("%d ",c[i]);
	printf("\n");
}
