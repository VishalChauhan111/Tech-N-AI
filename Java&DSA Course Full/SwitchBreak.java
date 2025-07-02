import  java.util.*;


public class SwitchBreak {
    public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);
    int button =sc.nextInt();
    sc.close();
    switch(button){
        case 1 -> System.out.println("Hello");
        case 2 -> System.out.println("Namaste");
        case 3 -> System.out.println("Bonjour");
        default -> System.out.println("Sahi button dabba le, 1-3");
    }
    sc.close();


    
    }
    
}
