
//Write a program to print the reverse of a string
import java.util.*;
class ReverseString
{
	public static void main(String args[])
	{
		String original, reverse="";
		int L1,i;
		Scanner in=new Scanner(System.in);
		System.out.println("Enter a string:");
		original=in.nextLine();
		L1=original.length();
		for(i=L1-1;i>=0;i--)
			reverse=reverse + original.charAt(i);
		System.out.println("Reverse is "+reverse);
	}
}

/*
Output:
Enter a string:
K J Somaiya
Reverse is ayiamoS J K
*/
