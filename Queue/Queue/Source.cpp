//Linked Queue
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
};                                       // All Basic Operations of Queue are applied*

class Queue
{
public:
	Node* front;
	Node* rear;
	Queue()
	{
		front = rear = NULL;
	}
	bool isEmpty()
	{
		if (front == NULL)//&&rear==NULL)
			return true;
		else
			return false;
	}

	void Enqueue(int item)
	{
		Node* newnode = new Node();
		newnode->data = item;

		if (isEmpty())
			front = rear = newnode;
		else
		{
			rear->next = newnode;
			rear = newnode;
		}
	}
   
	void display()
	{
		if (isEmpty())
			cout << "Queue is Empty, not items to display \n";
		else
		{
			Node* temp = front;
			while (temp != NULL)
			{
				cout << temp->data;
				temp = temp->next;
			}
			cout << endl;
		}
	}

	bool isFound(int item)
	{
		bool found = false;
		Node* temp = front;
		while (temp != NULL)
		{
			if (temp->data = item)
				found = true;
			temp = temp->next;
		}
		return found;
	}

	int Dequeue()
	{
		int delvalue = -1;
		if (isEmpty())
			cout << "The queue is empty \n";
		else if (front == rear)
		{
			delete front;
			front = rear = NULL;
		}
		else
		{
			Node* delptr = front;
			front = front->next;
			delvalue = delptr->data;
			delete delptr;
		}
		return delvalue;
	}

	int getFront()
	{
		return front->data;
	}

	int getRear()
	{
		return rear->data;
	}

	int count()
	{
		int counter = 0;
		Node* temp = front;
		while (temp != NULL)
		{
			counter++;
			temp = temp->next;
		}
		return counter;
	}

	void Clear()
	{
		while (!isEmpty())         // adding oop and these methods and Data Structure
		{                               
			Dequeue();
		}
	}
};

int main()
{
	Queue q;
	for (int i = 1; i <= 3; i++)
	{
		int item;
		cout << "Enter Item to Enqueue \n";
		cin >> item;
		q.Enqueue(item);
	}
	q.display();

	/*q.Dequeue();
	cout << "After dequeue \n"; 
	q.display();
	q.Dequeue();
	q.display();*/

	cout << "Clear All items \n";
	q.Clear();
	cout << "Display after clear \n";
	q.display();
}