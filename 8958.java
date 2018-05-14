import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int testcase = sc.nextInt();
		for (int k = 0; k < testcase; k++) {
			int score = 0;
			String s = sc.next();
			int size = s.length();
			int cur = 0;
			while(cur < size) {
				int lim = cur;
				if (s.charAt(cur) == 'X') {
					cur++;
					continue;
				}
				else {
					while(lim < size && s.charAt(lim) == 'O') {
						lim++;
					}
					score += sum(lim - cur);
					cur = lim;
				}
			}
			System.out.println(score);
		}
	}
	public static int sum(int a) {
		int ret = 0;
		for (int k = 1; k <= a;k++) {
			ret += k;
		}
		return ret;
	}
}
