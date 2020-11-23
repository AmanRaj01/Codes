import java.lang.*;
import java.util.*;

public class maxt {
    public static void main(String args[]) {
        // int A[] = new int[5];
        int A[] = { 1, 2, 3, 5, 6, 4, 12, 45, 23 };
        int max = A[0], max2 = A[0];
        for (int x : A) {
            if (x > max) {
                max2 = max;
                max = x;
            } else if (x > max2) {
                max2 = x;
            }
        }
        System.out.println(max + "  " + max2);

    }
}