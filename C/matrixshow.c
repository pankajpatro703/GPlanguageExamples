#include<stdio.h>
void main()
{
	int i,j,m,n;
	printf("Enter no of rows: ");
	scanf("%d",&n);
	printf("Enter no of columns: ");
	scanf("%d",&m);
	int a[m][n];
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Matrix is:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
