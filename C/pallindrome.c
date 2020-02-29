#include<stdio.h>
#include<string.h>
void rev(char a[],char b[]);
void main()
{
	char a[50],b[50],n,f=0;
	printf("Enter a string:\n");
	scanf("%s",a);
	rev(a,b);
	for(n=0;n<strlen(a);n++)
	{
		if(a[n]!=b[n])
		{			
			f=1;
			break;
		}
	}
	if(f==0)
		printf("It is pallindrome\n");
	else
		printf("It is not pallindrome\n");
}
void rev(char a[],char b[])
{
	int i,l;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		b[i]=a[l-i-1];
	}	
}

		
