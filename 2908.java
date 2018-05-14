import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String s1 = sc.next();
		String s2 = sc.next();
		int x = 100*(s1.charAt(2) - '0') + 10*(s1.charAt(1) - '0') + (s1.charAt(0) - '0');
		int y = 100*(s2.charAt(2) - '0') + 10*(s2.charAt(1) - '0') + (s2.charAt(0) - '0');
		
		System.out.println(Math.max(x, y));
		sc.close();
	}

}
