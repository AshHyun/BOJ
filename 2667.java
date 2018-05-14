import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	public static boolean[][] visited;
	public static int[][] map;
	public static final int[] dx = {0,1,-1, 0};
	public static final int[] dy = {1,0, 0,-1};
	public static int N, ctr;
	public static int[] result;
	public static Queue<Pair> q;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		N = sc.nextInt();
			
		visited = new boolean[N][N];
		map = new int[N][N];
		result = new int[N*N +1];
		//init
		Arrays.fill(result, 0);
		for(int j = 0; j < N; j++) {
			Arrays.fill(visited[j], false);
		}
			
		for (int i = 0; i < N; i++) {
			String s = sc.next();
			for (int k = 0; k < N; k++) {
				map[i][k] = s.charAt(k) - '0';
			}
		}
			
		q = new LinkedList<Pair>();
		ctr = 0;
		
		for (int a = 0; a < N; a++) {
			for (int b = 0; b < N; b++) {
				if(!visited[b][a] && map[b][a] == 1) {
					bfs(new Pair(a,b));
					ctr++;
				}
			}
		}
		
		System.out.println(ctr);
		Arrays.sort(result);
		for (int k = 0; k < result.length; k++) {
			if (result[k] != 0) System.out.println(result[k]);
		}
	}
	public static void bfs(Pair p) {
		visited[p.y][p.x] = true;
		q.offer(p);
		while(!q.isEmpty()) {
			result[ctr]++;
			Pair cur = q.poll();
			for (int k = 0; k < 4; k++) {
				int x_ = cur.x + dx[k];
				int y_ = cur.y + dy[k];
				
				if (x_ >= 0 && x_ < N && y_ >= 0 && y_ < N && !visited[y_][x_] && map[y_][x_] == 1) {
					q.offer(new Pair(x_,y_));
					visited[y_][x_] = true;
				}
			}
		}
	}
}
class Pair{
	public int x;
	public int y;
	Pair(int x, int y){
		this.x = x;
		this.y = y;
	}
}
