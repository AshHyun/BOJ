import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int ppl = sc.nextInt();
		int cute = 0; 
		int ncute = 0;
		for (int k = 0; k < ppl; k++) {
			int a = sc.nextInt();
			if (a == 1) cute++;
			else ncute++;
		}
		if (cute > ncute) System.out.print("Junhee is cute!");
		else System.out.print("Junhee is not cute!");
	}

}
