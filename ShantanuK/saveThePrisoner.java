package learn;
import java.util.*;

public class saveThePrisoner {

    public static void main(String[] args){      
      Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        for(int i = 0; i < t; i++)
        {
       int n = sc.nextInt();
       int c = sc.nextInt();
       int s = sc.nextInt();
       int p = (s + c -1) % n;
        if(p == 0){
           p =n;
        }
         System.out.println(p);
        }
    }
    }
