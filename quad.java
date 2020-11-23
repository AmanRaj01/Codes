import java.lang.*;
import java.util.*;

public class quad {
    public static void main(String[] args) {
        int a, b, c;
        System.out.println("Enter value of a, b & c in a*x^2 + b*x + c(Integers) ");
        Scanner s = new Scanner(System.in);
        System.out.println("a - ");
        a = s.nextInt();
        System.out.println("b - ");
        b = s.nextInt();
        System.out.println("c - ");
        c = s.nextInt();
        float d;
        double x1, x2;
        d = b * b - 4f * a * c;
        x1 = ((-b - Math.sqrt(d)) / (2f * a));
        x2 = ((-b + Math.sqrt(d)) / (2f * a));
        System.out.println("The value of x1 and x2 is- " + x1 + " and " + x2);
    }
}
