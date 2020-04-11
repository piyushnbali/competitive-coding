import java.util.*;

public class catmouse {

  public static void main(String[] args) {
       
   Scanner sc = new Scanner(System.in);
      
      int t = sc.nextInt();
      for(int i = 0;i<t;i++){
        int A = sc.nextInt();
        int B = sc.nextInt();
        int C = sc.nextInt();
        
        int disA = Math.abs(C - A);
        int disB = Math.abs(C - B);
        
        if(disA < disB){
          System.out.println("CAT A");
        }
        else if(disA > disB){
          System.out.println("Cat B");
        }
        else if(disA == disB){
          System.out.println("Mouse C");
        }
      }
  }

}
