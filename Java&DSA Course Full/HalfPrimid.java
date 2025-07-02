public class HalfPrimid {
    public static void main(String[] args) {
        // int n=4;
        //Outer loop 
        // for (int i = 1; i <=n; i++) {

        //     //Inner loop
        //     for(int j =1; j<=i; j++){
        //         System.out.print("*");
        //     }
        //     System.out.println();
            
        // }
        
        //Outer loop
        int n =4;
        for (int i = n; i >=1; i--) {

            //Inner loop
            for(int j =1; j<=i; j++){
                System.out.print("*");
            }
            System.out.println();
            
        }
    } 
}
