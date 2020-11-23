import java.lang.*;
import java.util.*;

public class strin {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        String str = s.next();
        int i = str.indexOf('@');
        String str1 = str.substring(0, i);
        int n = str.length();
        String str2 = str.substring(i + 1, n);
        System.out.println(str1 + " " + str2);
        int j = str2.indexOf(".");
        String str3 = str2.substring(0, j);
        System.out.println(str3.equalsIgnoreCase("gmail"));
    }
}