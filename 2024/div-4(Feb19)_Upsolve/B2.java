import java.util.Scanner;

public class B2 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for (int j = 0; j < t; j++) {
            long n = sc.nextLong();

            long sum = (n * (n + 1)) / 2;

            System.out.println(sum);
        }

        sc.close();
    }
}
