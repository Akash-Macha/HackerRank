// https://www.hackerrank.com/challenges/30-scope/problem

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Difference {
  	private int[] elements;
  	public int maximumDifference;
// -----------------------------
    Difference(int[] arr)
    {
        elements = arr;
    }
    public int factorial(int n){
        int fact = 1;
        for (int i = 1; i <= n; i++)
            fact = fact * i;
        return fact;
    }
    public int returnSize(int n)
    {
        return ( ( factorial(n) ) / (factorial(n-2)) * 2 ) ;
    }
    public void computeDifference()
    {
        int[] myArr = new int[returnSize(elements.length)];

        int k = 0;
        int max =0;

        for(int i = 0 ; i < (elements.length)-1 ; i++)
        {
            for(int j=i+1 ; j<(elements.length) ; j++ )
            {
                myArr[k++] = java.lang.Math.abs(elements[i]-elements[j]);
                if(k == 0){
                    max = myArr[0];
                }else{
                    if(myArr[k-1] > max)
                        max = myArr[k-1];
                }
            }
        }
        maximumDifference = max;
    }
// -------------------------------------
} // End of Difference class

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
}
