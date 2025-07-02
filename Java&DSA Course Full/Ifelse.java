import java.util.*;

public class Ifelse {

    public static void main(String[] args) {
        Scanner sc =new  Scanner(System.in);
        System.out.println("Enter Your Age ");
        int age = sc.nextInt();
        sc.close();
        if(age> 18){
            System.out.println("Adult,Now you can Watch Game Of Throne The OG Series Of All Time ");
        } else{
            System.out.println("Chota bheem Aur Rajkumari ki Shadi dekk ");
        }
        sc.close();
    }
}