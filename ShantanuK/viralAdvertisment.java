import java.util.*;
public class viralAdvertisment {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int d = sc.nextInt();
    int p = 5;
    int l = 0;
    for(int i = 1;i<=d;i++){
       l += p / 2;
       p = p/2;
       p = 3*p;
    }   
    System.out.println(l);
  }
}
