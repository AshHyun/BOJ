import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		while(sc.hasNext()) {
			String s = sc.nextLine();
			int len = s.length();
			int al = 0, Al = 0, num = 0, space = 0;
			for (int k = 0; k < len; k++) {
				if(s.charAt(k) == ' ') space++;
				else if ((int)s.charAt(k) >= 48 && (int)s.charAt(k) <= 57) num++;
				else if ((int)s.charAt(k) >= 65 && (int)s.charAt(k) <= 90) Al++;
				else if ((int)s.charAt(k) >= 97 && (int)s.charAt(k) <= 122) al++;
			}
			System.out.println(al + " " + Al + " " + num + " " + space);
		}
	}

}
