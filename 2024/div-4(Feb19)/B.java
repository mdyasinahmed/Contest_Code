import java.util.Scanner;

public class B {
  
    public static long recurSum(long n) { 
        long sum = 0;

        for (long i = 1; i <= n; i++) {
            sum += i % 9 == 0 ? 9 : i % 9;
        }

        return sum;
    } 
    
    public static void main(String args[]) { 
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        int i = 1;
        while (i <= t) {
            long n = sc.nextInt();

            System.out.println(recurSum(n%100005)); 
            i++;
        }
    } 
}
