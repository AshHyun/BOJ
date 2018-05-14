import java.util.*;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int testcase = sc.nextInt();
		int ctr = 0;
		boolean[] arr = new boolean[101];
		Arrays.fill(arr,  false);
		for (int k = 0; k < testcase; k++) {
			int which = sc.nextInt();
			
			if (arr[which]) ctr++;
			else {
				arr[which] = true;
			}
		}
		System.out.print(ctr);
	}

}
