// https://www.hackerrank.com/challenges/30-arrays/problem
// Unable to understand the given default code. So, I made a simple version similar to it.
import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] arr = new int[n];
        for(int i=0; i < n; i++){
            arr[i] = in.nextInt();
        }
        in.close();
        for(int i = n-1 ;i >= 0 ; i--)
            System.out.print(arr[i] + " ");
    }
}
