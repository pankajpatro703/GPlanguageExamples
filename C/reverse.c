//REVERSE OF AN ARRAY
#include<stdio.h>
void main()
{
	int i,a[50],n,temp;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	printf("Reversed array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
