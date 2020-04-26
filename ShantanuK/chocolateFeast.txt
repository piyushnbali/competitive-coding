import java.util.*;
public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t= sc.nextInt();
        for(int i = 0;i<t;i++){
        int n = sc.nextInt();
        int c= sc.nextInt();
        int m = sc.nextInt();
        int x = n/c;
        int j = x;
        while(x>=m){
            x-=m;
            j++;
            x++;
        }
        System.out.println(j);
        
            
        }
    }
}
