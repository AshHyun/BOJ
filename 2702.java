import java.util.Scanner;
import java.lang.Math;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int testcase = sc.nextInt();
		for (int k = 0; k < testcase; k++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			System.out.println(mult(Math.min(a,b), Math.max(a,b)) + " " + common(Math.min(a,b), Math.max(a,b)));
		}
	}
	public static int mult(int x, int y) {
		int copy = y;
		while (y%x != 0) {
			y += copy;
		}
		return y;
	}
	public static int common(int x, int y) {
		int ret = x;
		while (!(x % ret == 0 && y % ret ==0)) {
			ret--;
		}
		return ret;
	}
}
