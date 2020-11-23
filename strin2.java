import java.lang.*;
import java.util.*;

public class strin2 {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int b = s.nextInt();
        String str;
        str = String.valueOf(b);
        System.out.println(str.matches("[01]*"));
    }
}