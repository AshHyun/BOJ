import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        int a=0,b=1;
        if(n==0) {
            System.out.println(a);
            return;
        }if(n==1) {
            System.out.println(b);
            return;
        }
        for(int i=0;i<n-1;i++) {
            if(b>a) {
                a=a+b;
            }else {
                b=b+a;
            }
        }
        if(b>a) System.out.println(b);
        else System.out.println(a);
        
    }
 
}