import java.util.*;

public class Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int num = sc.nextInt();
		int[] arr = new int[num];
		for (int k = 0; k < num; k++) {
			arr[k] = sc.nextInt();
		}
		Arrays.sort(arr);
		int testcase = sc.nextInt();
		for(int k = 0; k < testcase; k++) {
			int target = sc.nextInt();
			System.out.println(binarysearch(target, arr, num));
		}
	}
	public static int binarysearch(int x, int[] pool, int size) {
		int begin, end, mid;
		begin = 0;
		end = size-1;
		while(begin < end) {
			mid = (begin + end)/2;
			if (pool[mid] < x) begin = mid + 1;
			else end = mid;
		}
		if (begin == end && pool[begin] == x) return 1;
		else return 0;
		
	}

}
