// https://www.hackerrank.com/challenges/30-recursion/problem
// Unable to complete the given default code. So, I made a different simple version of it.

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    static int Ans = 0;
    static int factorial(int n) {
        if(n == 1)
            return 1;
        Ans = n * factorial(n-1);
        return Ans;
    }

    public static void main(String[] args) {
    Scanner in = new Scanner(System.in);
    int n = in.nextInt();
    int result = factorial(n);
    System.out.println(result);
    }
}
