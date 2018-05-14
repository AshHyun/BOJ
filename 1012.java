import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	public static boolean[][] visited;
	public static boolean[][] map;
	public static final int[] dx = {0,1,-1, 0};
	public static final int[] dy = {1,0, 0,-1};
	public static int M;
	public static int N;
	public static Queue<Pair> q;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int tc = sc.nextInt();
		
		//testcase start
		for (int k = 0; k < tc; k++) {
			
			//input
			M = sc.nextInt();
			N = sc.nextInt();
			int num = sc.nextInt();
			
			visited = new boolean[N][M];
			map = new boolean[N][M];
			
			//init
			for(int j = 0; j < N; j++) {
				Arrays.fill(visited[j], false);
				Arrays.fill(map[j], false);
			}
			
			for (int i = 0; i < num; i++) {
				int x = sc.nextInt();
				int y = sc.nextInt();
				
				map[y][x] = true;
			}
			
			q = new LinkedList<Pair>();
			int ctr = 0;
			
			for (int a = 0; a < M; a++) {
				for (int b = 0; b < N; b++) {
					if(!visited[b][a] && map[b][a]) {
						bfs(new Pair(a,b));
						ctr++;
					}
				}
			}
			System.out.println(ctr);
		}
		sc.close();
	}
	public static void bfs(Pair p) {
		visited[p.y][p.x] = true;
		q.offer(p);
		while(!q.isEmpty()) {
			Pair cur = q.poll();
			for (int k = 0; k < 4; k++) {
				int x_ = cur.x + dx[k];
				int y_ = cur.y + dy[k];
				
				if (x_ >= 0 && x_ < M && y_ >= 0 && y_ < N && !visited[y_][x_] && map[y_][x_]) {
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
