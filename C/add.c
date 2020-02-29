//ADD ELEMENTS
#include<stdio.h>
void main()
{
	int a[50],n,i,sum=0;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("Sum of elements is %d\n",sum);
}	
