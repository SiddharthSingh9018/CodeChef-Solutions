import java.util.*;

public class Main {
    public static long findMinSumSubarray(int n, int k, int[] arr) {
        // Write your code here
        long sum=0;
        long minSum=Long.MAX_VALUE;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        minSum=sum;
        for(int i=k;i<n;i++){
            sum+=arr[i]-arr[i-k];
            minSum=Math.min(sum,minSum);
        }
        return minSum;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        scanner.close();
        System.out.println(findMinSumSubarray(n, k, arr));
    }
}