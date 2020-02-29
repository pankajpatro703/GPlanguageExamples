
//Write a program to demonstrate the use of constructors
import java.io.*;
class Volume
{
	void Volume(float l,float b,float h)
	{
		System.out.println("Volume of box is "+(l*b*h));
	}
	
	void Volume(float r,float h)
	{
		System.out.println("Volume of cylinder is "+(3.1416*r*r*h));
	}
	
	void Volume(float l)
	{
		System.out.println("Volume of cube is "+(l*l*l));
	}
}

class ConstOverload
{
	public static void main(String args[])
	{
		Volume obj=new Volume();
		obj.Volume(5,8,9);
		obj.Volume(6,12);
		obj.Volume(5);
	}
}

/*
Output:
Volume of box is 360.0
Volume of cylinder is 1357.1712
Volume of cube is 125.0
*/
