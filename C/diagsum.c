#include<stdio.h>
void main()
{
	int i,j,n,s1=0,s2=0;
	printf("Enter order of matrix: ");
	scanf("%d",&n);
	int a[n][n];
	printf("Enter elements:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
				s1=s1+a[i][i];
			else
				s2=s2+a[i][j];		
		}
	}
	printf("Sum of diagonal elements is %d \nSum of non-diagonal elements is %d\n",s1,s2);
}
