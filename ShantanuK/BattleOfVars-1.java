import java.io.*;
import java.util.*;

public class Solution {
    /*where is the attack?*/

    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
        String code;
        int d = 0;
        int o = 0;
        int p = 0;
        int e = 0;
        char c[] = new char[n];
        code = sc.next();
        for(int i = 0;i<n;i++){
            c[i] = code.charAt(i);
        }
        for(int i = 0;i<n;i++){
            if(c[i] == 'D'){
                d++;
            }
            
        }
         for(int i = 0;i<n;i++){
            if(c[i] == 'O'){
                o++;
            }
            
        }
         for(int i = 0;i<n;i++){
            if(c[i] == 'P'){
                p++;
            }
            
        }
         for(int i = 0;i<n;i++){
            if(c[i] == 'E'){
                e++;
            }
            
        }
        System.out.println(d+" "+o+" "+p+" "+e);
    }
}