import java.lang.*;
import java.util.*;

public class store{
    public static void main(String[] args)
    {
        byte a,b,c=0;
        Scanner s = new Scanner(System.in);
        a = s.nextByte();
        b = s.nextByte();
        c = (byte)(c|a);
        b = (byte)(b<<4);
        c = (byte)(c|b);
        System.out.println((c&0b11110000)>>4);
        System.out.println((c&0b00001111));
    }
}