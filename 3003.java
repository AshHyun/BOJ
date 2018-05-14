import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int[] arr = {1, 1, 2, 2, 2, 8};
		for (int k = 0; k < 6; k++) {
			int comp = sc.nextInt();
			System.out.print(arr[k] - comp + " ");
		}
	}

}
