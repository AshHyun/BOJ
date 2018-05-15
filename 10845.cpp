#include<iostream>
#include<string>

using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node(int x) {
		data = x;
	}
	Node() {
		;
	}

};

class que {
public:
	Node* first;
	Node* last;
	que();

	void push(int x);
	void pop();
	void size();
	bool empty();
	void front();
	void back();
};

que::que() {
	first = NULL;
	last = NULL;
}

bool que::empty() {
	return (first == NULL && last == NULL);
}


void que::push(int x) {
	if (empty()) {
		Node* newnode;
		newnode = new Node(x);
		first = newnode;
		last = newnode;
		newnode->next = NULL;
	}
	else {
		Node* newnode;
		newnode = new Node(x);
		last->next = newnode;
		last = newnode;
		newnode->next = NULL;
	}
}

void que::pop() {
	if (empty()) {
		cout << -1 << endl;
		return;
	}
	else {
		if (first == last) {
			cout << first->data << endl;
			first = NULL;
			last = NULL;
		}
		else {
			cout << first->data << endl;
			first = first->next;
		}
	}
}

void que::size() {
	if (empty()) {
		cout << 0 << endl;
		return;
	}
	Node* it;
	it = first;
	int ctr(0);
	for (it; it != last; it = it->next) {
		ctr++;
	}
	cout << ctr + 1 << endl;
}

void que::front() {
	if (empty()) {
		cout << -1 << endl;
		return;
	}
	else {
		cout << first->data << endl;
		return;
	}
}

void que::back() {
	if (empty()) {
		cout << -1 << endl;
		return;
	}
	else {
		cout << last->data << endl;
		return;
	}
}

int main() {
	int n;
	cin >> n;
	string option;
	que q;
	for (int k = 0; k < n; k++) {
		cin >> option;
		if (option == "push") {
			int which;
			cin >> which;
			q.push(which);
		}
		else if (option == "pop") {
			q.pop();
		}
		else if (option == "size") {
			q.size();
		}
		else if (option == "empty") {
			cout << q.empty() << endl;
		}
		else if (option == "front") {
			q.front();
		}
		else if (option == "back") {
			q.back();
		}
	}
	return 0;
}