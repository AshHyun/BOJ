import java.util.Arrays;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int testcase = sc.nextInt();
		for (int k = 0; k < testcase ; k++) {
			int ppl = sc.nextInt();
			int seat = sc.nextInt();
			boolean[] arr = new boolean[seat+1];
			Arrays.fill(arr,  false);
			int ctr = 0;
			for (int i = 0; i < ppl; i++) {
				int where = sc.nextInt();
				if (arr[where]) ctr++;
				else arr[where] = true;
			}
			System.out.println(ctr);
		}
	}

}
