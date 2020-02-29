#include<stdio.h>
void main()
{
	int i,j,k;
	int a[3][3],b[3][3],multi[3][3];
	printf("Enter values of first 3X3 matrix :\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&a[i][j]);
	}
	printf("Enter values of second 3X3 matrix :\n") ;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			scanf("%d",&b[i][j]);
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			multi[i][j]=0;
			for(k=0;k<3;k++)
				multi[i][j]+=a[i][k]*b[k][j] ;
		}
	}
	printf("The resulting 3X3 matrix is :\n") ;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",multi[i][j]);
		printf("\n") ;
	}
}
