import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[3];
		for (int k = 0; k < 3; k++) {
			arr[k] = sc.nextInt();
		}
		Arrays.sort(arr);
		for (int k = 0; k < 3; k++) {
			System.out.print(arr[k] + " ");
		}
	}

}
