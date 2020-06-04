package learn;
import java.util.*;

public class utopianTree {

  public static void main(String[] args) {
     Scanner sc = new Scanner(System.in);
     int n = sc.nextInt();
     int a[] = new int[n];
     for(int i = 0;i<n;i++){
       a[i] = sc.nextInt();
     }
     for(int i = 0;i<n;i++){
     int h = 1;
     for(int t = 0;t<a[i];t++){
       if(t % 2 != 0){
         h = h + 1;
       }
       else if(t % 2 == 0){
         h = 2*h;
       }
       
     }
    System.out.println(h);
     }
  }
}
 