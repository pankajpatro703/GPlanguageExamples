#include<stdio.h>
#include<math.h>
void main()
{
	float A,B,C,root1,root2;
	float realp,imagp,dis;
	printf("Enter values of A,B,C:");
	scanf("%f %f %f",&A,&B,&C);
	if(A==0||B==0||C==0)
		printf("Error:Roots cannot be determined\n");
	else
	{
	 	dis=(B*B)-(4*A*C);
		if(dis<0)
		{
			printf("Imaginary roots\n");
			realp=-B/(2*A);
			imagp=sqrt(abs(dis))/(2*A);
			printf("Root 1=%f+i%f\n",realp,imagp);
			printf("Root 2=%f+i%f\n",realp,imagp);
		}
		else if(dis>0)
		{
			printf("Roots are real and distinct\n");
			root1=(-B+sqrt(dis))/(2*A);
			root2=(-B-sqrt(dis))/(2*A);
			printf("Root1=%f\n",root1);
			printf("Root2=%f\n",root2);
		}
		else if(dis==0)
		{
			printf("Roots are real and equal\n");
			root1=-B/(2*A);
			root2=root1;
			printf("Root1=%f\n",root1);
			printf("Root2=%f\n",root2);
		}
	}
}
