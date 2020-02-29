//BUBBLE SORT DESCENDING ORDER
#include<stdio.h>
void main()
{
	int i,j,a[50],n,temp;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{	
			if(a[j]<a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted array is:\n");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
