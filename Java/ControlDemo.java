// Write a program for banking application using switch-case statement
import java.io.*;
class ControlDemo
{
	public static void main(String args[]) throws IOException
	{
		int balance, deposit, withdraw, ch;
		balance=5000;
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		do
		{
			System.out.println("1.Check balance \n2.Deposit \n3.Withdraw \n4.Exit");
			System.out.println("Enter choice:");
			ch=Integer.parseInt(br.readLine());
			switch(ch)
			{
				case 1:
						System.out.println("Your current balance is "+balance);
						break;
				case 2:
						System.out.println("Enter amount to deposit:");
						deposit=Integer.parseInt(br.readLine());
						balance+=deposit;
						System.out.println("Balance after deposit= "+balance);				
						break;
				case 3:
						System.out.println("Enter amount to be withdrawn:");
						withdraw=Integer.parseInt(br.readLine());
						if(withdraw<balance)
						{
							balance-=withdraw;
							System.out.println("New balance after withdrawl is= "+balance);
						}
						else
							System.out.println("Insufficient balance");
						break;
				case 4:
						System.exit(0);
						break;
				default:
						System.out.println("Invalid choice");
			}
		} while(ch<5);
	}
}

/*
Output:
1.Check balance 
2.Deposit 
3.Withdraw 
4.Exit
Enter choice:
1
Your current balance is 5000
1.Check balance 
2.Deposit 
3.Withdraw 
4.Exit
Enter choice:
2
Enter amount to deposit:
400
Balance after deposit+ 5400
1.Check balance 
2.Deposit 
3.Withdraw 
4.Exit
Enter choice:
3
Enter amount to be withdrawn:
1000
New balance after withdrawl is= 4400
1.Check balance 
2.Deposit 
3.Withdraw 
4.Exit
Enter choice:
4
*/
