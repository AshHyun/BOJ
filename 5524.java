import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int testcase = sc.nextInt();
		for (int k = 0; k < testcase; k++) {
			String s = sc.next();
			int len = s.length();
			for (int i = 0; i < len; i++) {
				if((int)s.charAt(i) >= 97 && (int)s.charAt(i) <= 122) System.out.print(s.charAt(i));
				else System.out.print((char)((int)s.charAt(i) + 32));
			}
			System.out.print("\n");
		}
	}

}
