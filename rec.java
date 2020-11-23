import java.lang.*;
import java.util.*;

class rect {
    public int l;
    public int b;

    public int area(int l, int b) {
        return l * b;
    }

    public int perimeter(int l, int b) {
        return (2 * (l + b));
    }
}

public class rec {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a, b;
        a = s.nextInt();
        b = s.nextInt();
        rect r = new rect();
        System.out.println("Area " + r.area(a, b) + "    Perimeter " + r.perimeter(a, b));

    }
}