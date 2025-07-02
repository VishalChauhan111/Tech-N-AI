import java.util.*;

public class SimpleCalaculator {
    public static void main(String[] args) {
        int a;
        int b;
        int Calculate;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter your First Value ");
            a = sc.nextInt();
            System.out.println("Enter your Second Value ");
            b = sc.nextInt();
            System.out.println("Enter the Operation like 1(+) , 2(-) ,3 (*) ,4 (/) & 5 (%) "); 
            Calculate = sc.nextInt();
        }
        switch(Calculate) {
            case 1 -> System.out.println( a+b);
            case 2 -> System.out.println( a-b);
            case 3 -> System.out.println(a*b);
            case 4 -> System.out.println(a/b);
            case 5 -> System.out.println(a%b);
            default -> System.out.println("Enter the Valid Operator ");
        }

    }
    
}
