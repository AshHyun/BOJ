import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int total = sc.nextInt();
		for (int k = 0; k < 9; k++) {
			int much = sc.nextInt();
			total -= much;
		}
		System.out.print(total);
	}

}
