import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String s = sc.next();
		int len = s.length();
		for (int k = 0; k < len; k++) {
			if ((int)s.charAt(k) < 97) System.out.print((char)((int)s.charAt(k) + 32));
			else System.out.print((char)((int)s.charAt(k) - 32));
		}
	}

}
