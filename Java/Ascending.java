
//write a program to sort elements of an array in ascending order
import java.io.*;
class Ascending
{
	public static void main(String args[])throws IOException
	{
		int A[]=new int[5];
		int temp,i,j;
		System.out.println("Enter 5 elements:");
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		for(i=0;i<=4;i++)
		{
			A[i]=Integer.parseInt(br.readLine());
		}
		for(i=0;i<=4;i++)
		{
			for(j=0;j<=3;j++)
			{
				if(A[j]>A[j+1])
				{
					temp=A[j];
					A[j]=A[j+1];
					A[j+1]=temp;
				}
			}                                                        
		}
		System.out.println("Elements in ascending order:");
		for(i=0;i<=4;i++)
		{
			System.out.print(A[i]+" ");
		}
	}
}

/*
Output:
Enter 5 elements:
35
56
78
10
43
Elements in ascending order:
10
35
43
56
78
*/
