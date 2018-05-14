import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int v = sc.nextInt();
		int cur = 0;
		int ctr = 0;
		while(true) {
			ctr++;
			cur += a;
			if (cur >= v) break;
			else {
				cur -= b;
			}
		}
		System.out.print(ctr);
	}

}
