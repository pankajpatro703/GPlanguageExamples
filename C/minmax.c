//LARGEST & SMALLEST IN ARRAY
#include<stdio.h>
void main()
{
	int a[50],n,i,min,max;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=min=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		else if(min>a[i])
			min=a[i];
	}
	printf("Largest element is %d \nSmallest element is %d \n",max,min);
}	

