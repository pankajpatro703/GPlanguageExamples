
//Write a program to add 2 numbers
import java.io.*;
class CmdDemo
{
	public static void main(String args[])
	{
		int x,y,z;
		x=Integer.parseInt(args[0]);
		y=Integer.parseInt(args[1]);
		z=x+y;
		System.out.println("Sum is "+z);
	}
}

/*
Output:
$java CmdDemo 7 9
Sum is 16
*/


