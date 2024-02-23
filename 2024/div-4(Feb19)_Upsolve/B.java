import java.util.Scanner;

public class B {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();

        for(int j=0; j<t; j++) {
            long n = sc.nextInt();
            n = n%1000000007;
            long count=1;
            long sum = 0;
            for(int i=1; i<=n; i++){
                sum+=count;
                sum=sum%1000000007;
                if(i==9) {
                    count=0;
                }
                // System.out.println(sum);

                count++;
            }
            System.out.println(sum%1000000007);
        }

    }
}