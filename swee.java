import java.lang.*;
import java.util.*;

public class swee {
    public static void main(String args[]) {
        String s = "whoareu.netasd";
        int i = s.indexOf(".");
        String str = s.substring(i + 1);
        switch (str) {
            case "com":
                System.out.println("Commercial");
                break;
            case "gov":
                System.out.println("Government");
                break;
            case "net":
                System.out.println("Net?");
                break;
            case "org":
                System.out.println("Organization");
                break;
            default:
                System.out.println("Don't Know m8");
        }
    }
}