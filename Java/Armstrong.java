
//Write a program to check whether entered number is Armstrong or not
import java.io.*;
class Armstrong
{
	public static void main(String args[]) throws IOException
	{
		int n,a,sum=0,x;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("Enter a no.: ");
		n=Integer.parseInt(br.readLine());
		a=n;
		while(n>0)
		{
			 x=n%10;
			 sum=sum+(x*x*x);
			 n=n/10;
		}
		if(sum==a)
			System.out.println("No. is Armstrong");
		else
			System.out.println("No. is not Armstrong");
	}
}

/*
Output:
Enter a no.: 153
No. is Armstrong
Enter a no.: 703
No. is not Armstrong
*/
