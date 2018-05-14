import java.util.Arrays;
import java.util.Scanner;

public class Main {
	public static int V;
	public static int E;
	public static int[][] adjm;
	public static Edge[] edges;
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		V = sc.nextInt();
		E = sc.nextInt();
		long result = 0;
		adjm = new int[V+1][V+1];
		edges = new Edge[E];
		
		for (int k = 0; k < E; k ++) {
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = sc.nextInt();
			adjm[a][b] = c;
			adjm[b][a] = c;
			edges[k] = new Edge(a, b, c);
		}
		sc.close();
		Arrays.sort(edges);
		UnionFind uf = new UnionFind(V);
		int MSTedges = 0;
		for (int k = 0; k < edges.length; k++) {
			if (uf.find(edges[k].to) != uf.find(edges[k].from)) {
				uf.union(edges[k].from, edges[k].to);
				result += edges[k].weight;
				MSTedges++;
			}
			if (MSTedges == V-1) break;
		}
		System.out.print(result);
	}

}
class Edge implements Comparable<Edge>{
	int from; int to; 
	int weight;
	Edge(){
		;
	}
	Edge(int from, int to, int weight){
		this.from = from;
		this.to= to;
		this.weight = weight;
	}
	@Override
	public int compareTo(Edge edge) {
		return (weight - edge.weight);
	}
}
/*
class UnionFind{
	public int[] root;
	public int edges;
	UnionFind(int v){
		root = new int[v+1];
		Arrays.fill(root, -1);
		edges = 0;
	}
	public void union(int a, int b) {
		int root1 = find(a);
		int root2 = find(b);
		
		if(root1 == root2) return;
		
		if(root1 > root2) {
			root[a] = b;
		}
		else {
			root[b] = a;
		}
	}
	public int find(int x) {
		if(root[x] < 0) {
			return x;
		}
		return find(root[x]);
	}
}
*/
class UnionFind {

	  private int[] _parent;
	  private int[] _rank;


	  public int find(int i) {

	    int p = _parent[i];
	    if (i == p) {
	      return i;
	    }
	    return _parent[i] = find(p);

	  }


	  public void union(int i, int j) {

	    int root1 = find(i);
	    int root2 = find(j);

	    if (root2 == root1) return;

	    if (_rank[root1] > _rank[root2]) {
	      _parent[root2] = root1;
	    } else if (_rank[root2] > _rank[root1]) {
	      _parent[root1] = root2;
	    } else {
	      _parent[root2] = root1;
	      _rank[root1]++;
	    }
	  }


	  public UnionFind(int max) {

	    _parent = new int[max+1];
	    _rank = new int[max+1];

	    for (int i = 1; i < max+1; i++) {
	      _parent[i] = i;
	    }
	  }
}
