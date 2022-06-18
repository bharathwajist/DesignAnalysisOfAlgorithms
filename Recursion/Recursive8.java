public class Recursive8 {
    public static int func(int n){
        if(n == 0 || n == 1){
            return 1;
        }else{
            return n*func(n-1);
        }
    }
    public static void main(String[] args) {
        int n = 4;
        System.out.println(func(n));
    }
}
