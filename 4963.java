import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class Main {
	public static int[][] map;
	public static boolean[][] visited;
	public static int ctr;
	public static final int[] dx = {-1,0,1,0,1,1,-1,-1};
	public static final int[] dy = {0,1,0,-1,1,-1,1,-1};
	public static int h;
	public static int w;
	
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		w = sc.nextInt();
		h = sc.nextInt();
		while(!(w == 0 && h == 0)) {
			ctr = 0;
			map = new int[h][w];
			visited = new boolean[h][w];
			for (int y = 0; y < h; y++) {
				for (int x = 0; x < w; x++) {
					map[y][x] = sc.nextInt();
				}
				Arrays.fill(visited[y], false);
			}
			
			for (int y = 0; y < h; y++) {
				for (int x = 0; x < w; x++) {
					if (map[y][x] == 1 && !visited[y][x]) {
						ctr++;
						bfs(x,y);
					}
				}
			}
			System.out.println(ctr);
			
			w = sc.nextInt();
			h = sc.nextInt();
		}
		sc.close();
	}
	
	public static void bfs(int a, int b) {
		Queue<Pair> q = new LinkedList<>();
		q.offer(new Pair(a,b));

		while(!q.isEmpty()) {
			Pair cur = q.poll();
			int copyx = cur.x;
			int x;
			int copyy = cur.y;
			int y;
			for (int k = 0; k < 8; k++) {
				x = copyx + dx[k];
				y = copyy + dy[k];
				if(!(x >= 0 && x < w && y >= 0 && y < h)) continue;
				
				if(!visited[y][x] && map[y][x] == 1) {
					q.offer(new Pair(x,y));
					visited[y][x] = true;
				}
			}
		}
	}

}
class Pair{
	int x;
	int y;
	Pair(int x, int y){
		this.x = x;
		this.y = y;
	}
}