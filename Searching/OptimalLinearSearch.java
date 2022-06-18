package Searching;

public class OptimalLinearSearch {
    public static void Search(int arr[], int x) {
        int left = 0;
        int length = arr.length;
        int right = length - 1;
        int position = -1;

        // Running loop from 0 to right
        for (left = 0; left <= right;) {

            if (arr[left] == x) {
                // Set position = left
                position = left;
                System.out.println("Element found at " + (position + 1) + " position with " + (left + 1) + " attempt.");
                break;
            }

            if (arr[right] == x) {
                // Set position = left
                position = left;
                System.out.println(
                        "Element found at " + (position + 1) + " position with " + (length - right) + " attempt.");
                break;
            }
            left++;
            right--;
        }

        if(position == -1){
            System.out.println("Element not found in the array");
        }
    }

    public static void main(String[] args) {
        int arr[] = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
        int x = 110;
        Search(arr, x);
    }
}
