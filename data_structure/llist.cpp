// linked list in C++
// by zindex

#include <iostream>

// class definition
class Node {
public:
	Node() {
		next = 0;
	}
	Node(int el, Node *ptr = 0) {
		data = el;
		next = ptr;
	}
	int data;
	Node *next;
};

class List {
public:
	List() {
		head = tail = 0;
	}
	~List();
	int isEmpty() {
		return head == 0;
	}
	void addToHead(int);
	void addToTail(int);
	void printList();
	void reverseList();
private:
	Node *head, *tail;
};

// implementation
List::~List() {
	for(Node *p; !isEmpty();){
		p = head->next;
		delete head;
		head = p;
	}
}

void List::printList() {
	Node *ptr = head;
	while (ptr != 0){
		std::cout << ptr->data << std::endl;
		ptr = ptr->next;
	}
}

void List::reverseList() {
	Node *node2 = head;
	Node *node1 = 0;
	Node *next = 0;
	while (node2 != 0) {
		next = node2->next;
		node2->next = node1;
		node1 = node2;
		node2 = next;
	}
	head = node1;
}


void List::addToHead(int el){
	head = new Node(el,head);
	if (tail == 0){
		tail = head;
	}
}

void List::addToTail(int el){
	if (tail != 0) {
		tail->next = new Node(el);
		tail = tail->next;
	}
	else{
		head = tail = new Node(el);
	}
}

int main() {
	List l = List();
	l.addToTail(1);
	l.addToTail(2);
	l.reverseList();
	l.printList();
	return 0;
}