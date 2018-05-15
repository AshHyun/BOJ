import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int[] arr = new int[num];
		for(int k = 0; k < num; k++) {
			arr[k] = sc.nextInt();
		}
		Arrays.sort(arr);
		int tc = sc.nextInt();
		
		for (int k = 0; k < tc; k++) {
			int which = sc.nextInt();
			System.out.print(bs(which, arr, num) + " ");
		}
	}
	public static int bs(int x, int[] arr, int end) {
		int left = 0; int right = end-1;
		while (left < right) {
			int mid = (left + right)/2;
			if (arr[mid] < x) {
				left = mid + 1;
			}
			else {
				right = mid;
			}
		}
		if (left == right && arr[left] == x) {
			return 1;
		}
		else {
			return 0;
		}
	}
}
