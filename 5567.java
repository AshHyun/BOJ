import java.util.Arrays;
import java.util.Scanner;

public class Main {
	static int V;
	static int nE;
	static boolean[] visited;
	static boolean[][] adjm;
	static boolean[] friends;
	
	static int ctr;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		V = sc.nextInt();
		nE = sc.nextInt();
		
		visited = new boolean[V+1];
		Arrays.fill(visited, false);
		visited[1] = true;
		adjm = new boolean [V+1][V+1];
		for(int k = 0; k < V+1; k++) {
			Arrays.fill(adjm[k], false);
		}
		
		ctr = 0;
		
		for(int k = 0; k < nE; k++) {
			int from = sc.nextInt();
			int to = sc.nextInt();
			adjm[from][to] = true;
			adjm[to][from] = true;
		}
		sc.close();
		
		friends = new boolean[V+1];
		Arrays.fill(friends,  false);
		boolean[] ffriends = friends.clone();
		
		
		for(int k = 1; k < V+1; k++) {
			if (!visited[k] && adjm[1][k]) {
				friends[k] = true; 
				visited[k] = true;
			//	System.out.println("Visited' " + k); 
			}
		}
		for(int i = 1; i < V+1; i++) {
			if(friends[i]) {
				for (int j = 1; j < V+1; j++) {
					if (!visited[j] && adjm[i][j]) {
						ffriends[j] = true; 
						visited[j] = true;
					//	System.out.println("Visited " + j); 
					}
				}
			}
		}
		for(int k = 2; k < V+1; k++) {
			if(ffriends[k]) {
				ctr++;
			//	System.out.println("ffriends: " + k); 
			}
			if(friends[k]) {
				ctr++;
			//	System.out.println("friends: " + k); 
			}
		}
		
		System.out.print(ctr);
	}
	
	public static void dfs(int v) {
		System.out.println("Visited " + v);
		visited[v] = true;
		ctr++;
		for(int k = 1; k < V+1; k++) {
			if (!visited[k] && adjm[v][k]) dfs(k);
		}
	}
}
