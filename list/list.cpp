#include <iostream>
#include "list.h"
using namespace std;

List::~List() {
	for(Node *p; !isEmpty(); ) {
		p=head->next;
		delete head;
		head = p;
	}
}

void List::pushToHead(char el)
{
	head = new Node(el, head);
	if(tail==0)
	{
		tail = head;
	}
}
void List::pushToTail(char el)
{
	//TO DO!
}
char List::popHead()
{
	char el = head->data;
	Node *tmp = head;
	if(head == tail)
	{
		head = tail = 0;
	}
	else
	{
		head = head->next;
	}
	delete tmp;
	return el;
}
char List::popTail()
{
	// TO DO!
	return NULL;
}
bool List::search(char el)
{
	// TO DO! (Function to return True or False depending if a character is in the list.
	return NULL;
}
void List::reverse()
{
	// TO DO! (Function is to reverse the order of elements in the list.
}
void List::print()
{
	if(head  == tail)
	{
		cout << head->data;
	}
	else
	{
		Node *tmp = head;
		while(tmp!=tail)
		{
			cout << tmp->data;
			tmp = tmp->next;
		}
		cout << tmp->data;
	}
}