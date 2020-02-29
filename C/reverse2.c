//DISPLAY REVERSE OF ARRAY
#include<stdio.h>
void main()
{
	int i,a[50],n,temp;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Reversed array is: \n");
	for(i=n-1;i>=0;i--)
		printf("%d ",a[i]);
	printf("\n");
}
