import  java.util.*;


public class OddEven {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number ");
        int x =sc.nextInt();
        sc.close();
        if(x%2==0){
            System.out.println("Even ");
        } else{
            System.out.println("Odd ");
        }
        sc.close();

    }
    
}
