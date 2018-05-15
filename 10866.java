import java.util.*;
public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int N = sc.nextInt();
		
		Deque d = new Deque();
		for(int k = 0; k < N; k++) {
			String option = sc.next();
			int which;
			switch(option) {
				case "push_back":
					which = sc.nextInt();
					d.push_back(which);
					break;
				case "push_front":
					which = sc.nextInt();
					d.push_front(which);
					break;
				case "pop_back":
					System.out.println(d.pop_back());
					break;
				case "pop_front":
					System.out.println(d.pop_front());
					break;
				case "size":
					System.out.println(d.size);
					break;
				case "empty":
					if(d.isEmpty()) System.out.println(1);
					else System.out.println(0);
					break;
				case "front":
					d.front();
					break;
				case "back":
					d.back();
					break;
			}
		}

	}

}


class Deque {
	public Node first;
	public Node last;
	int size;
	Deque(){
		first = null;
		last = null;
		size = 0;
	}
	
	public void push_front(int data) {
		Node newnode = new Node();
		newnode.data = data;
		size++;
		if(isEmpty()) {
			first = newnode;
			last = newnode;
			newnode.next = null;
			newnode.prev = null;
		}
		else {
			first.prev = newnode;
			newnode.next = first;
			newnode.prev = null;
			first = newnode;
		}
	}
	
	public void push_back(int data) {
		Node newnode = new Node();
		newnode.data = data;
		size++;
		if(isEmpty()) {
			first = newnode;
			last = newnode;
			newnode.next = null;
			newnode.prev = null;
		}
		else {
			last.next = newnode;
			newnode.prev = last;
			newnode.next = null;
			last = newnode;
		}
	}
	
	public int pop_front() {
		if (isEmpty()) return -1;
		else {
			if (size == 1) {
				int ret = first.data;
				first.prev = null;
				first.next = null;
				last = null;
				first = null;
				size--;
				return ret;
			}
			else {
				int ret = first.data;
				first = first.next;
				first.prev = null;
				size--;
				return ret;
			}
		}
	}
	public int pop_back() {
		if (isEmpty()) return -1;
		else {
			if (size == 1) {
				int ret = last.data;
				last.prev = null;
				last.next = null;
				first = null;
				last = null;
				size--;
				return ret;
			}
			else {
				int ret = last.data;
				last = last.prev;
				last.next = null;
				size--;
				return ret;
			}
		}
	}
	public boolean isEmpty() {
		return (first == null && last == null);
	}
	public void front() {
		if (isEmpty()) System.out.println(-1);
		else System.out.println(first.data);
	}
	public void back() {
		if (isEmpty()) System.out.println(-1);
		else System.out.println(last.data);
	}
}
class Node{
	public int data;
	public Node next, prev;
}