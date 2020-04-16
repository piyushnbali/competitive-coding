package learn;
import java.util.*;

public class countingValley{

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();
    String s= sc.next();
    int x = 0;
    char c[] = new char[n];
    int v=0;
    for(int i = 0;i<n;i++){
      c[i] = s.charAt(i);
    }
    for(int i = 0;i<n;i++){
      if(c[i] == 'U'){
        x++;
        if(x ==0){
          v++;
      }
      }
      else if(c[i]=='D'){
        x--;
      }
    }
    System.out.println(v);
    
   
    
  }
  }


