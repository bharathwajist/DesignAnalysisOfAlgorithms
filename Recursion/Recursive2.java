public class Recursive2 {
    public static int func(int n){
        int limit = 1000;
        if(n == 0)
            return 0;
        if(n > limit)
            return 0;
        System.out.println(n);
        return func(n*2);
    }
    public static void main(String[] args) {
        func(100);
    }
}