// https://www.hackerrank.com/challenges/30-review-loop/problem

import java.io.*;
import java.util.*;

public class H {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int T = scan.nextInt(); //Integer.parseInt(scan.next());
        scan.nextLine();

        String s = new String();

        while(T != 0)
        {
            s = scan.nextLine();
            char[] myCharArray = s.toCharArray();
            if(s.length() < 2 || s.length() > 10000)
                return;
            for(int i = 0 ; i<s.length();i++)
                if(i%2 == 0){
                	//String t = s[i];
                    System.out.print(myCharArray[i]);
                }
            System.out.print(" ");
            for(int i = 1;i<s.length();i++)
                if(i%2 != 0)
                    System.out.print(myCharArray[i]);
            System.out.println();
            --T;
        }
    }
}
