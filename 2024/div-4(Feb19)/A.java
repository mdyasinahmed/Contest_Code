import java.util.Scanner;

public class A {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for(int i=0; i<n; i++) {
            String str = sc.next();
            int A=0;
            int B=0;
            for(int j=0; j<5; j++){
                if(str.charAt(j)=='A') A++;
                else B++;
            }
            if(A>B) {
                System.out.println('A');
            } else {
                System.out.println('B');
            }
        }
    }
}