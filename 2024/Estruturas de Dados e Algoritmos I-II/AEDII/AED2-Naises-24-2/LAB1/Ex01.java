package LAB1;
import java.util.Scanner;

public class Ex01{
   
    public static void isPar(int x){
        if (x%2==0){
            System.out.println("2");
          }else{
            System.out.println("1");
          }
    }
    public static void main (String [] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();


        for (int i = 0; i < n; i++)
        {
            int x = sc.nextInt();
            isPar(n);
      
        }
        
    }



}