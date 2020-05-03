import java.util.*;
public class Solution{
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         String s = sc.next();
         int x = 0;
         char c[] = new char [s.length()];
         for(int i = 0;i<s.length();i++){
             c[i] = s.charAt(i);
         }
         for(int i = 0;i<s.length();i+=3){
             if(c[i] != 'S'){
                  x++;
             }
         }
             for(int i = 1;i<s.length();i+=3){
               if(c[i] != 'O'){
                  x++;
             }  
         }
         for(int i = 2;i<s.length();i+=3){
             if(c[i] != 'S'){
                  x++;
             } 
         }
         System.out.println(x);
    }
}