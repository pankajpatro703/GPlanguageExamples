#include<stdio.h>
void main()
{
	int a,n,rem,sum=0;
	printf("Enter a no. ");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(a==sum)
	  	printf("Armstrong no.\n");
	else
  		printf("Not an Armstrong no.\n");
}

