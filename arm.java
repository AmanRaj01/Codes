import java.lang.*;
import java.util.*;

public class arm {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int n, m, x, c = 0;
        double sum = 0;
        n = s.nextInt();
        m = n;
        while (m > 0) {
            m = m / 10;
            c++;
        }
        m = n;
        // System.out.println(c);
        while (m > 0) {
            x = m % 10;
            m = m / 10;
            sum = sum * 10 + x;
            // sum += Math.pow(x, c);
        }
        System.out.println(sum);
    }
}