//BINARY SEARCH
#include<stdio.h>
void main()
{
	int i,f,l,mid,n,search,a[50];
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements in ascending order\n",n);
	for (i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter element to be found: ");
	scanf("%d",&search);
	f=0;
	l=n-1;
	mid=(f+l)/2;
	while(f<=l) 
	{
		if (a[mid]<search)
			f=mid+1;    
		else if(a[mid]==search)
		{
			printf("Element %d found at location %d\n", search, mid+1);
			break;
		}
		else
			l = mid-1;
		mid=(f+l)/2;
	}
	if (f>l)
		printf("Not found! \n%d is not present\n", search);  
}
