import java.lang.*;
import java.util.*;

public class swap{
    public static void main(String[] args)
    {
        int a,b;
        System.out.println("Enter the numbers to be swapped");
        Scanner s = new Scanner(System.in);
        System.out.println("a- ");
        a = s.nextInt();
        System.out.println("b- ");
        b = s.nextInt();
        a = a^b;
        b = a^b;
        a = a^b;
        System.out.println("After swapping");
        System.out.println("a is " +a);
        System.out.println("b is " +b);
    }
}