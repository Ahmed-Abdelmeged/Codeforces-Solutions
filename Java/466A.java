import java.util.Scanner;

/**
 * Created by ahmed on 6/29/2017.
 */
public class Main {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int total = 0;
        if (m * a > b) {
            int remin = (n % m) * a;
            if (remin > b) {
                total = (n / m) * b + b;
            } else {
                total = (n / m) * b + remin;
            }
        } else {
            total = a * n;
        }
        System.out.println(total);
    }
}