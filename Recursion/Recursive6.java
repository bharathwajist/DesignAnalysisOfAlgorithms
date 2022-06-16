public class Recursive6 {
    public static void func(int n){
        if(n > 0){
            func(--n);
            System.out.print(n+" ");
            func(--n);
        }
    }

    public static void main(String[] args) {
        func(4);
    }
}