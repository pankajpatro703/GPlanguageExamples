#include<stdio.h>
int fact(int);
void main()
{
	int no,ans;
	printf("Enter a no.: ");
	scanf("%d",&no);
	ans=fact(no);
	printf("Factorial is %d\n",ans);
}

int fact(int n)
{
	int f;
	if(n==1)
		f=1;
	else
		f=fact(n-1)*n;
	return f;
}
