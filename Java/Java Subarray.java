/*  -Akash Macha  31 March 2019 (Sunday)  00:16  AM
https://www.hackerrank.com/challenges/java-negative-subarray/problem?isFullScreen=false     */

import java.io.*;
import java.util.*;

public class Solution {

    private static int getNumberOfNegativeSum(int[] arr){
        int count = 0;
        int subArraySum = 0;

        int len = arr.length;
        for(int i=0 ; i < len ; ++i){
            subArraySum = 0;
            for(int j = i ; j < len ; ++j){
                subArraySum += arr[j];
                if(subArraySum < 0)
                    ++count;
            }
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();

        int[] arr = new int[n];
        for(int i=0 ; i < n ; ++i)
            arr[i] = scan.nextInt();

        System.out.println(getNumberOfNegativeSum(arr));

        scan.close();
    }
}

