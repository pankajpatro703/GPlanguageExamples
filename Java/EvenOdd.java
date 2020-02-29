
//Write a program to check whether entered number is even or odd
import java.io.*;
class EvenOdd
{
	public static void main(String args[])
	{
		int a;
		a=Integer.parseInt(args[0]);
		if(a%2==0)
			System.out.println("The No. is even");
		else
			System.out.println("The No. is odd");
	}
}

/*
Output:
23
Number is odd
54
Number is even
*/
