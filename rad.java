import java.lang.*;
import java.util.*;

public class rad {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        if (str.matches("[01]+")) {
            System.out.println("Binary");
        } else if (str.matches("[0-7]+")) {
            System.out.println("Octal");
        } else if (str.matches("[0-9]+")) {
            System.out.println("Decimal");
        } else {
            System.out.println("Hexa");
        }
    }
}