import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		System.out.println(common(Math.min(a, b), Math.max(a, b)));
		System.out.println(mult(Math.min(a, b), Math.max(a, b)));
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
