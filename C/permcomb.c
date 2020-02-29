#include<stdio.h>
int fact(int);
void main()
{
	int n,r,perm,comb;
	printf("Enter n & r:\n");
	scanf("%d %d",&n,&r);
	perm=fact(n)/fact(r);
	printf("Permutation is %d\n",perm);
	comb=fact(n)/(fact(r)*fact(n-r));
	printf("Combination is %d\n",comb);
}

int fact(int a)
{
	int f;
	if(a==1)
		f=1;
	else
		f=fact(a-1)*a;
	return f;
}
