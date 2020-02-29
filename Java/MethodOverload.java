
//Write a program to demonstrate function overloading 
import java.io.*;
class Overload
{
	double volume(float l, float w, float h)
	{
		return (l*w*h);
	}
	double volume(float r, float h)
	{
		return (3.1416*r*r*h);
	}
	double volume(float l)
	{
		return (l*l*l);
	}
}

public class MethodOverload
{
	public static void main(String args[])
	{
		Overload obj= new Overload();
		double rectbox=obj.volume(5,8,9);
		System.out.println("Volume of rectangular box is "+rectbox);
		double cylinder=obj.volume(6,12);
		System.out.println("Volume of cylinder is "+cylinder);
		double cube=obj.volume(5);
		System.out.println("Volume of cube is "+cube);
	}
}

/*
Output:
Volume of rectangular box is 360.0
Volume of cylinder is 1357.1712
Volume of cube is 125.0
*/
