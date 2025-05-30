public class ExecutionTimeComparison {
    public static void main(String[] args) {
		
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number to calculate its factorial: ");
        long number = input.nextlong();

        // Measure execution time for iterative method
        long startIterative = System.nanoTime();
        long iterativeResult = factorialIterative(number);
        long endIterative = System.nanoTime();
        long iterativeDuration = endIterative - startIterative;

        // Measure execution time for recursive method
        long startRecursive = System.nanoTime();
        long recursiveResult = factorialRecursive(number);
        long endRecursive = System.nanoTime();
        long recursiveDuration = endRecursive - startRecursive;

        // Print results
        System.out.println("Factorial using iteration: " + iterativeResult);
        System.out.println("Time taken by iteration: " + iterativeDuration + " nanoseconds");

        System.out.println("Factorial using recursion: " + recursiveResult);
        System.out.println("Time taken by recursion: " + recursiveDuration + " nanoseconds");
    }

    // Iterative method for factorial
    public static long factorialIterative(int n) {
        long result = 1;
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
        return result;
    }

    // Recursive method for factorial
    public static long factorialRecursive(int n) {
        if (n == 0 || n == 1) {
            return 1;
        }
        return n * factorialRecursive(n - 1);
    }
}
