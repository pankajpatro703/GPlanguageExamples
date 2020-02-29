
//Write a program to display the reverse of entered number
import java.io.*;
class Reverse
{
	public static void main(String args[]) throws IOException
	{
		int num,a;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.println("Enter the number to be reversed:");
		num=Integer.parseInt(br.readLine());
		System.out.print("The Reversed Number is ");
		while(num>0)
		{
			a=num%10;
			System.out.print(a);
			num=num/10;
		}
		System.out.println();
	}
}

/*
Output:
Enter the number to be reversed:
3428
The Reversed Number is 8243
*/
