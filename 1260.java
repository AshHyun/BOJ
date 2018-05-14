import java.util.Arrays;
import java.util.LinkedList;
import java.util.Scanner;
import java.util.Queue;

public class Main {
	public static boolean[] visited;
	public static boolean[][] adjm;
	public static int v;
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		v = sc.nextInt();
		int e = sc.nextInt();
		int start = sc.nextInt();
		visited = new boolean[v+1];
		adjm = new boolean[v+1][v+1];
		
		//init
		Arrays.fill(visited, false);
		for(int k = 0; k < v+1; k++) {
			Arrays.fill(adjm[k], false);
		}
		
		//input
		for(int k = 0; k < e; k++) {
			int from = sc.nextInt();
			int to = sc.nextInt();
			adjm[from][to] = true;
			adjm[to][from] = true;
		}
		sc.close();
		
		dfs(start);
		Arrays.fill(visited, false);
		System.out.print("\n");
		bfs(start);
	}
	public static void dfs(int x) {
		visit(x);
		for(int k = 1; k < v+1; k++) {
			if (!visited[k] && adjm[x][k]) dfs(k);
		}
	}
	@SuppressWarnings("unchecked")
	public static void bfs(int x) {
		Queue q;
		q = new LinkedList<Integer>();
		q.offer(x);
		
		while(!q.isEmpty()) {
			int cur = (int)q.poll();
			visit(cur);
			for(int k = 1; k < v+1; k++) {
				if (!visited[k] && adjm[cur][k]) {
					q.offer(k);
					visited[k] = true;
				}
			}
		}
	}

	
	public static void visit(int x) {
		visited[x] = true;
		System.out.print(x + " ");
	}
}
