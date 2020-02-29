#include<stdio.h>
#include<string.h>
void main()
{
	char name[60],a[20],b[20],c[20];
	printf("Enter your first name: ");
	scanf("%s",a);
	printf("Enter your middle name: ");
	scanf("%s",b);		
	printf("Enter your last name: ");
	scanf("%s",c);	
	strcat(name,a);
	strcat(name," ");
	strcat(name,b);
	strcat(name," ");
	strcat(name,c);
	printf("Your name is %s\n",name);
}
