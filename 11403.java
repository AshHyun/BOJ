import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static int[][] adjm;
	public static boolean[] visited;
	public static boolean[] result;
	public static int V;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		V = sc.nextInt();
		adjm = new int[V+1][V+1];
		visited = new boolean[V+1];
		result = new boolean[V+1];
		
		Arrays.fill(visited, false);
		for (int i = 1; i < V+1; i++) {
			for(int j = 1; j < V+1; j++) {
				adjm[i][j] = sc.nextInt();
			}
		}
		
		for (int start = 1; start < V+1; start++) {
			Arrays.fill(result, false);
			Arrays.fill(visited,  false);
			dfs(start);
			for (int k = 1; k < V+1; k++) {
				if (result[k]) System.out.print(1 + " ");
				else System.out.print(0 + " ");
			}
			System.out.println();
		}
		
	}
	public static void dfs(int start) {
		for (int k = 0; k < V+1; k++) {
			if(!visited[k] && adjm[start][k] == 1) {
				dodfs(k);
			}
		}
		
	}
	public static void dodfs(int start) {
		visit(start);
		for (int k = 0; k < V+1; k++) {
			if(!visited[k] && adjm[start][k] == 1) {
				dodfs(k);
			}
		}
		
	}
	public static void visit(int v) {
		visited[v] = true;
		result[v] = true;
	}

}
