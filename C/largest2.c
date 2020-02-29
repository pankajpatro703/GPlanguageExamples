#include<stdio.h>
void main()
{
	int a[50],i,j,n,temp;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements of array\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[j]<a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}

		}
	
	printf("Largest elements are %d %d\n",a[0],a[1]);
}
