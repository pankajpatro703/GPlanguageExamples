
//Write a program to display the addition & multiplication of 2 matrices
import java.io.*;
class MatMult
{
	public static void main(String args[]) throws IOException
	{
		int arr1[][]=new int[3][3];
		int arr2[][]=new int[3][3];
		int arr3[][]=new int[3][3];
		int arr4[][]=new int[3][3];
		int i,j,k;
		DataInputStream dr=new DataInputStream(System.in);
		System.out.println("Enter elements for Matrix 1:");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				arr1[i][j]=Integer.parseInt(dr.readLine());
		}
		System.out.println("Enter elements for Matrix 2:");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				arr2[i][j]=Integer.parseInt(dr.readLine());
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
		System.out.println("Sum is:");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				System.out.print(arr3[i][j]+" ");
			System.out.println();
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				for(k=0;k<3;k++)
					arr4[i][j]+=arr1[i][k]*arr2[k][j];
			}		
		}
		System.out.println("Product is:");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				System.out.print(arr4[i][j]+" ");
			System.out.println();
		}
	}
}

/*
Output:
Enter elements for Matrix 1:
1
2
3
4
5
6
7
8
9
Enter elements for Matrix 2:
1
0
1
2
1
2
3
1
3
Sum is:
2 2 4 
6 6 8 
10 9 12 
Product is:
14 5 14 
32 11 32 
50 17 50 
*/
