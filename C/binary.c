#include<stdio.h>
void main()
{
	int n,sum=0,rem,i=1;
	printf("Enter a decimal no. ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		sum=sum+(rem*i);
		n=n/2;
		i=i*10;
	}
	printf("Binary equivalent is %d\n",sum);
}
