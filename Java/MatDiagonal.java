
//Write a program to calculate the sum of diagonal elements in a matrix
import java.io.*;
class MatDiagonal
{
	public static void main(String args[]) throws IOException
	{
		int array[][]=new int[3][3];
		int i,j,s=0;
		DataInputStream dr=new DataInputStream(System.in);
		System.out.println("Enter the Elements of Matrix:");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				array[i][j]=Integer.parseInt(dr.readLine());
		}
		System.out.print("Sum of diagonal elements of matrix is ");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				if(i==j)
					s=s+array[i][j];
			}
		}
		System.out.println(s);
	}
}

/*
Output:
Enter the Elements of Matrix:
1
2
3
4
5
6
7
8
9
Sum of diagonal elements of matrix is 15
*/
