#include<iostream>
using namespace std;
class Node
{
public: 
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = NULL;
	}
};                                  //Using Linked lists :linked stack

class Stack
{
	Node* top;

public:
	Stack()
	{
		top = NULL;
	}
	bool isEmpty()
	{
		if (top == NULL)
			return true;
		else
			return false;
	}

	bool IsFull()   //„‘ Ê—«œ «‰ «·” «ﬂ ›· »” „„ﬂ‰ «‘Ìﬂ ·Ê ⁄«Ì“
	{
		Node* ptr = new Node();
		if (ptr == NULL)
			cout << "The Stack is Full , cannot add more items\n";
	}

	void push(int item)
	{
		Node* newnode = new Node();
		newnode->data = item;
		if (isEmpty())
		{
			newnode->next = NULL;
			top = newnode;
		}
		else
		{
			newnode->next = top;
			top = newnode;
		}

	}

	int pop()  //‰”Õ» «Ê· ⁄‰’— „‰ «·” «ﬂ   
	{
		int value;
		Node* delptr = top;
		value = top->data;
		top = top->next;
		delete delptr;
		return value;

	
	}

	int peek()
	{
		return top->data;
	}

	void display()  // Based on linked lists
	{
		Node* temp = top;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	int count()  
	{
		int counter = 0;
		Node* temp = top;
		while (temp != NULL)
		{
			counter++;
			temp = temp->next;
		}
		return counter;
	}

	bool IsFound(int item)
	{
		bool found = false;
		Node* temp = top;
		while (temp != NULL)
		{
			if (temp->data == item)
				found = true;
			temp = temp->next;
		}
		return found;
	}
};

int main()
{
	int item;
	Stack s;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter item to push\n";
		cin >> item;
		s.push(item);
		s.display();

	}

	/*cout<< s.pop() << "Was deleted from the Stack\n";
	s.display();
	cout << s.pop() << "Was deleted from the Stack\n";
	s.display();*/
	
	cout << "Enter item to search for\n";
	cin >> item;
	
	if (s.IsFound(item))
		cout << "Is Found\n";
	else
		cout << "Not Found\n";

	cout << s.count() << endl;
}