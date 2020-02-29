#include<stdio.h>
int gcd(int,int);
void main()
{
	int a,b,g;
	printf("Enter 2 numbers:\n");
	scanf("%d %d",&a,&b);
	g=gcd(a,b);
	printf("GCD is %d\n",g);
}

int gcd(int m,int n)
{
	int i,t,r;
	if(m>n)
	{
		t=n;
		n=m;
		m=t;
	}
	for(i=1;i<m;i++)
	{
		if((m%i==0)&&(n%i==0))
			r=i;
	}
	return r;
}
