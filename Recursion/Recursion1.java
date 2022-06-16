public class Recursive1 {
    public static int func(int n){
        // Base Condition
        if(n <= 1)
            return 1;
        else
            n = n+func(n-1);
        return n;
    }
    public static void main(String[] args) {
        int x = 5;
        int y = 2;
        System.out.println(func(x)+y);
    }
}
