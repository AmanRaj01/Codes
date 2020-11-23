import java.lang.*;
import java.util.*;

public class gc {
    static int gcd(int a, int b) {
        while (a != b) {
            if (a > b)
                a = a - b;
            else
                b = b - a;
        }
        return b;
    }

    public static void main(String args[]) {
        System.out.println(gcd(77, 11));
    }
}