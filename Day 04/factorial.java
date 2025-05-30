import java.util.Scanner;
public class factorial{
	
	public static int factRec(int n)
	{
		//factorial of 1 and 0 = 1;
		if(n==0 || n==1)
		{
			return 1;
		}
		//factorial of n = n*(n-1)
		return n*factRec(n-1);
	}
	
	public static int factIter(int n)
	{
		int fact = 1;
		for(int i=2; i<=n; i++)
		{
			fact = fact*i;
		}
		return fact;
	}
	
	
	public static void main(String args[])
	{
		//Scanner object
		Scanner input = new Scanner(System.in);
		//getting input
		System.out.print("Enter a number to find factorial: ");
		//storing the value
		int num = input.nextInt();
		
		//finding execution duration
		long startTimeRec = System.nanoTime();
		int resultRec = factRec(num);
		long endTimeRec = System.nanoTime();
		long durationRec = endTimeRec-startTimeRec;
		
		System.out.println("Factorial of "+num+ " using Rec: "+resultRec);
		
		System.out.println("Execution time of factRec: "+durationRec);
		
		long startTimeIter = System.nanoTime();
		int resultIter = factIter(num);
		long endTimeIter = System.nanoTime();
		long durationIter = endTimeIter-startTimeIter;
		
		System.out.println("Factorial of "+num+ " using Iter: "+resultIter);
		System.out.println("Execution time of factIter: "+durationIter);
		
		
	}
}
