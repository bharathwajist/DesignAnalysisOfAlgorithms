package Searching;

public class LinearSearch {
    public static void Search(int arr[], int x){
        for (int i = 0; i < arr.length; i++) {
            if(arr[i]==x){
                System.out.println("X value found at : "+i);
            }
        }
    }

    public static void main(String[] args) {
        int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
        int x = 110;
        Search(arr, x);
    }
}
