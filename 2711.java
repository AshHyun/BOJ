import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int testcase = sc.nextInt();
		for (int k = 0; k < testcase; k++) {
			int where = sc.nextInt();
			where--;
			String which = sc.next();
			String first = which.substring(0, where);
			String second = which.substring(where+1);
			System.out.println(first + second);
		}
	}

}
