import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		for (int k = 0; k < tc; k++) {
			int[] arr = new int[10];
			for (int i = 0; i < 10; i++) {
				arr[i] = sc.nextInt();
			}
			Arrays.sort(arr);
			System.out.println(arr[7]);
		}
	}

}
