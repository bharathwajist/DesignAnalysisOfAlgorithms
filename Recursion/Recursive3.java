public class Recursive3 {
    public static int func(int n){
        if (n == 1){
            return 0;
        }else{
            return 1+func(n/2);
        }
    }

    public static void main(String[] args) {
        int n = 15;
        func(n);
    }
}
