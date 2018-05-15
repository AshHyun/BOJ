import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int result = 1;
		for (int k = 1; k <= a; k++) {
			result *= k;
		}
		System.out.print(result);
	}
}
