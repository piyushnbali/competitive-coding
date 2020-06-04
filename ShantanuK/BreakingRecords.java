import java.util.*;
public class Solution{
    public static void main(String[] args){
         Scanner sc = new Scanner(System.in);
         int n = sc.nextInt();
         int minBreak =0;
         int maxBreak =0;
         int s[] = new int[n];
         for(int i = 0;i<n;i++){
             s[i] = sc.nextInt();
         }
         int min = s[0];
         int max = s[0];
         for(int i = 1;i<n;i++){
             if(s[i]<min){
                 min=s[i];
                 minBreak++;
             }
              if(s[i]>max){
                 max = s[i];
                 maxBreak++;
             }
         }   
         System.out.println(maxBreak+" "+minBreak);

    }
}
