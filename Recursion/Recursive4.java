public class Recursive4 {
    public static int func(int n){
        if(n == 0){
            return 0;
        }else{
            System.out.print(n%2);
            return func(n/2);
        }
    }

    public static void main(String[] args) {
        int n = 204;
        func(n);
    }
}
