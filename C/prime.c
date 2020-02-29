#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a no. ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		break;
	}
	if(n==i)
		printf("Prime no.\n");
	else if(n==0||n==1)
		printf("Neither prime nor composite\n");
	else
		printf("Not a prime no.\n");
}
