public class Recursive7 {
    public static int func(int n) {
        if (n == 0) {
            return 0;
        }
        if (n == 1 || n == 2) {
            return 1;
        } else {
            return (func(n - 1) + func(n - 2));
        }
    }

    public static void main(String[] args) {
        int n = 10;
        for (int i = 0; i < n; i++) {
            System.out.print(func(i)+ " ");
        }
        System.out.println();
    }
}
