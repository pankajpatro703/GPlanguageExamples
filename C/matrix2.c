#include<stdio.h>
void main()
{
	int i,j,m,n;
	printf("Matrix A:\n");
	printf("Enter no of rows: ");
	scanf("%d",&n);
	printf("Enter no of columns: ");
	scanf("%d",&m);
	int a[m][n],c[m][n];
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Matrix B:\n");
	printf("Enter no of rows: ");
	scanf("%d",&n);
	printf("Enter no of columns: ");
	scanf("%d",&m);
	int b[m][n];
	printf("Enter values:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			c[i][j]=a[i][j]+b[i][j];
	}
	printf("Addition of matrices A & B:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
}

