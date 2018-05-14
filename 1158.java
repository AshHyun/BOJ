import java.util.*;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n, m, size;
		n = sc.nextInt();
		m = sc.nextInt();
		size = n;
		cLinkedlist survivors = new cLinkedlist();
		for (int k = n; k > 0; k--) {
			survivors.insertfront(k);
		}
		Vector<Integer> jo = new Vector<>();
		cIterator kill = survivors.getIterator();
		while(kill.getdata() != m) {
			kill.next();
		}
		while(n > 0) {
			jo.add(kill.getdata());
			kill.deletecur();
			if(kill.atEnd()) kill.next();
			n--;
			for( int rep = 0; rep < m-1; rep++) {
				if(survivors.header.next == survivors.header) break;
				kill.next();
				if(kill.atEnd()) kill.next();
			}
		}
		System.out.print("<");
		System.out.print(jo.get(0));
		for(int k = 1; k < size; k++) {
			System.out.print(", ");
			System.out.print(jo.get(k));
		}
		System.out.print(">");
	}

}

class cLinkedlist{
	public final Node header;
	cLinkedlist(){
		header = new Node();
		header.data = -1;
		header.next = header;
	}
	public boolean isEmpty() {
		return (header.next == header);
	}
	public void insertfront(int data) {
		Node newnode = new Node();
		newnode.data = data;
		if(isEmpty()) {
			header.next = newnode;
			newnode.next = header;
		}
		else {
			newnode.next = header.next;
			header.next = newnode;
		}
	}
	public cIterator getIterator() {
		return new cIterator(header);
	}
	public void display() {
		Node cur;
		cur = header.next;
		for (; cur != header;cur = cur.next) {
			System.out.print(cur.data + " ");
		}
	}
}
class cIterator{
	cIterator(Node h){
		header = h;
		prev = h;
		cur = h.next;
	}
	
	public boolean atEnd() {
		return (cur == header);
	}
	
	public Node cur, prev, header;
	
	public void deletecur() {
		if(atEnd()) return;
		else {
			prev.next = cur.next;
			cur = cur.next;
		}
	}
	
	public int getdata() {
		if(atEnd()) {
			return -1;
		}
		else return cur.data;
	}
	
	public void next() {
		prev = cur;
		cur = cur.next;
	}
}

class Node{
	public int data;
	public Node next;
}
