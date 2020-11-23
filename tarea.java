import java.lang.*;
import java.util.*;

public class tarea {
    public static void main(String[] args) {
        int a, b, c;
        float s, r;
        double ar;
        System.out.println("Enter sides of the trianlge(integers)-");
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        s = (float) ((a + b + c) / 2);
        r = (float) (s * (s - a) * (s - b) * (s - c));
        ar = Math.sqrt(r);
        System.out.println("Area is-- " + ar);
    }
}
