import java.util.Scanner;

public class CD75 {
    public static int getSplitIndex(int[] arr) {
        int l = 0, r = arr.length-1;
        if (arr[l] <= arr[r]) return l;
        while (r-l > 1) {
            int mid = (l+r) / 2;
            if (arr[mid] >= arr[l] && arr[mid] > arr[r]) {
                l = mid;
            } else if (arr[mid] < arr[l] && arr[mid] <= arr[r]) {
                r = mid;
            }
        }
        return l;
    }
    public static boolean binarySearch(int[] arr, int l, int r, int target) {
        while (l <= r) {
            int mid = l + (r-l) / 2;
            if (arr[mid] == target) {
                return true;
            } else if (arr[mid] < target) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return false;
    }
    public static boolean numIsExist(int[] arr, int target) {
        int splitIndex = getSplitIndex(arr);
        return binarySearch(arr, 0, splitIndex, target) || binarySearch(arr, splitIndex+1, arr.length-1, target);
    }
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int N = input.nextInt();
        int target = input.nextInt();
        int[] arr = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = input.nextInt();
        }
        System.out.println(numIsExist(arr, target) ? "Yes" : "No");
    }
}
