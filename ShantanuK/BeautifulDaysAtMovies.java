import java.util.*;
public class Solution {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int k = sc.nextInt();
        int diff = y-x+1;
        int count = 0;
        int mod = 0;
        int r= 0;
        int a[] = new int[diff];
        for(int j = 0;j<diff;j++){
            a[j] = x + j;
             
        }
        for(int j = 0;j<diff;j++){
            int temp = a[j];
            r=0;
            while(a[j]!=0){
                   r = r*10;
                   r = r + a[j]%10;
                   a[j]/=10;
            }
            a[j] = temp;
            mod = a[j] - r;
            mod = Math.abs(mod);
              if(mod%k==0){
                  count++;
             }
        }
        System.out.println(count);
    }
    }