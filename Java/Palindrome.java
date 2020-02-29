
//Write a program to check ehether entered string is a palindrome or not
import java.util.*;
class Palindrome
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
		if(original.equals(reverse))
			System.out.println("Palindrome");
		else		
			System.out.println("Not Palindrome");
	}
}

/*
Output:
Enter a string:
MALAYALAM
Palindrome
Enter a string:
Nitin
Not Palindrome
*/
