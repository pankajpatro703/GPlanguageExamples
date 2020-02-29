#include<stdio.h>
void main()
{
 int a,b,ch;
 printf("Enter the numbers:\n");
 scanf("%d %d",&a,&b);
 printf("1:Add \n2:Subtract \n3:Multiply \n4:Divide \n5:Modulus \n6:Stop \nEnter your choice: ");
 scanf("%d",&ch);
 switch(ch)
 	{
  	case 1:
   		printf("Addition is %d\n",a+b);
   	break;
  
  	case 2:
   		printf("Subtraction is %d\n",a-b);
   	break;
  
  	case 3:
   		printf("Multiplication is %d\n",a*b);
 	break;
  
  	case 4:
   		printf("Division is %d\n",a/b);
   	break;
  
  	case 5:
  		printf("Modulus is %d\n",a%b);
   	break;
  
  	case 6:
   	break;

  	default:
   		printf("Enter valid command\n" );
 }
}
  
 
  





