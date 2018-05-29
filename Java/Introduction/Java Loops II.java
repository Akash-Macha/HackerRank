import java.util.*;
import java.io.*;

class Solution{
    public static void calculate(int a, int b, int n)
    {
        int counter = 0;
        while( counter <= n-1 )
        {
            int temp = 0;
            int term = a;
            while(temp <= counter)
            {
                term += ( java.lang.Math.pow(2,temp) * b );
                
                ++temp;
            }
            System.out.print(term + " ");
            ++counter;   
        }
    }
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            calculate(a, b, n);
            System.out.println();
        }
        in.close();
    }
}