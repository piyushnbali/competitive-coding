import java.util.*;
public class PdfViewer {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int t = 26;
    int height=0;
    int n[] = new int[t];
    for(int i = 0;i<t;i++){
      n[i] = sc.nextInt();
    }
     String s = sc.next();
     
     for(int i = 0;i<s.length();i++){
       if(height<n[s.charAt(i)-97]){
         height = n[s.charAt(i)-97];
       }
     }
     System.out.println(s.length()*height);
  }
}

