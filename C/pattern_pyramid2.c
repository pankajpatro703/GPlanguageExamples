#include<stdio.h>
void main()
{
	int i,j,k,n;
	printf("Enter no. of rows:");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		for(j=n+1;j>=i;j--)
			printf(" ");
		for(k=1;k<=2*i-1;k++)
			printf("*");
		printf("\n");
	}
}
