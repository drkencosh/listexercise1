#ifndef LIST
#define LIST

class Node {
public:
	char data;
	Node *next;
	Node(char el, Node *ptr =0)
	{
		data = el; next = ptr;
	}
};

class List {
public:
	List() { head = tail = 0; }
	int isEmpty() { return head == 0; }
	~List();
	void pushToHead(char el);
	void pushToTail(char el);
	char popHead();
	char popTail();
	bool search(char el);
	void reverse();
	void print();
private:
	Node *head, *tail;
};

#endif