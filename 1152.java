import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		String ss = sc.nextLine();
		String s = ss.trim();
		if (s.length() == 0) {
			System.out.print(0);
			return;
		}
		String[] arr; 
		arr = s.split(" ");
		System.out.print(arr.length);
	}

}
