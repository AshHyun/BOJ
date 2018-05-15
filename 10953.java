import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int testcase = sc.nextInt();
		for (int k = 0; k < testcase; k++) {
			String s = sc.next();
			int a = s.charAt(0) - '0';
			int b = s.charAt(2) - '0';
			System.out.println((a+b));
		}
	}

}
