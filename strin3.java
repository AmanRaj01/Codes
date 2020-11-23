import java.lang.*;
import java.util.*;

public class strin3 {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        String b = s.next();
        // String str;
        // str = String.valueOf(b);
        System.out.println(b.matches("[0-7A-Fa-f]*"));
    }
}