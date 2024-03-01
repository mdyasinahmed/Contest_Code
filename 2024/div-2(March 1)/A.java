import java.util.Arrays;
import java.util.Scanner;

public class A {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt(); 

        while(t-- > 0) {
            int n = sc.nextInt();

            int[] arr = new int[n];

            for(int i=0; i<n; i++) {
                arr[i] = sc.nextInt();
            }

            Arrays.sort(arr);

            int a = 0;
            a += Math.abs(arr[0] - arr[n-1]);
            a += Math.abs(arr[1] - arr[n-2]);
            
            System.out.println(a*2);
        }
    }
}
