public class Recursive5 {
    public static int func(int n){
        if(n<1){
            return 0;
        }else{
            // Pattern 1
            // for (int i = 0; i < n; i++) {
            //     System.out.print("* ");
            // }

            // Pattern 2
            for (int i = 0; i < n; i++) {
                System.out.print("* ");
            }
            System.out.println();
            return func(n-1);
        }
    }

    public static void main(String[] args) {
        func(10);
    }
}
