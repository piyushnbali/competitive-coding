import java.util.*;

public class Solution {

    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
          int n = sc.nextInt();
          int a[] = new int[n];
          int t = 0;
          for(int i = 0;i<n;i++){
              a[i] = sc.nextInt();
          }
          Arrays.sort(a);
          for(int i = 0;i<n-1;i++){
              if(a[i] == a[i+1]){
                  t++;
                  i+=1;
              }
              }
              System.out.println(t);
          

    }
}