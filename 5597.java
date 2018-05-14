import java.util.*;
public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		boolean[] arr = new boolean[31];
		Arrays.fill(arr, false);
		Scanner sc = new Scanner(System.in);
		for (int k = 0; k < 28; k++) {
			int num = sc.nextInt();
			arr[num] = true;
		}
		for (int k = 1; k < 31; k++) {
			if (arr[k] != true) System.out.println(k);
		}
	}

}
