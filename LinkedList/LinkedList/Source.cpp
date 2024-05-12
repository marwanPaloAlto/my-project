#include<iostream>                      //there are variations of linked lists,we covered all operations #

using namespace std;                       //revision needed for clearifying*

class Node   // class that represenrs the Node ready
{
public:
	int data;
	Node* next;
};

class LinkedList
{
public:
	Node* head;
	LinkedList()
	{
		head = NULL;
	}

	/*bool isempty()           // to check list is empty or not
	{
		if (head == NULL)
			return true;
		else
			return false;
	}*/

	bool isempty()     //ØÑíÞÉ ãÎÊÕÑÉ æ ÇÔØÑ
	{
			return (head==NULL); // means if head = null , it will return true
	}

	// insert first , last , before a specific item

	void InsertFirst(int newvalue)
	{
		Node* newnode =new Node();
		newnode->data = newvalue;
		if (isempty())
		{
			newnode->next = NULL;
			head = newnode;
		}
		else
		{
			newnode->next = head;
			head = newnode;
		}
	}

	// Traversing + printing nodes' data

	void Display()
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "";
			temp = temp->next;
		}
	}

	int Count()
	{
		int counter=0;
		Node* temp = head;
		while (temp != NULL)
		{
			counter++;
			temp = temp->next;
		}
		return counter;
	}

	bool isfound(int key)
	{
		bool found = false;
		Node* temp = head;
		while (temp != NULL)
		{
			if (temp->data == key)
				found = true;
			temp = temp->next;    // traverse to next item and check it
		}
		return found;

	}

	void insertbefore(int item, int newvalue)
	{
		if (isempty())
			InsertFirst(newvalue);

		if (isfound(item))
		{
			Node* newnode = new Node();
			newnode->data = newvalue;
			Node* temp = head;
			while (temp != NULL && temp->next->data != item)
			{
				temp = temp->next;
			}
			newnode->next = temp->next;
			temp->next = newnode;
		}
		else
		{
			cout << "Sorry, Item Not Found\n";
		}
	}

	void Append(int newvalue)
	{
		if (isempty())
			InsertFirst(newvalue);
		else
		{
		}
		Node* temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		Node* newnode = new Node();
		newnode->data = newvalue;
		temp->next=newnode;
		newnode->next = NULL;

	}

	void Delete(int item)
	{
		if(isempty())
		cout << "List is empty, no items to delete\n";
		Node* delptr = head;        // declared out of if to reuse it again
		if (head->data == item)
		{
			head = head->next;
			delete delptr;
		}
		else
		{
			Node* prev = NULL;
			delptr = head;
			while (delptr->data != item)
			{
				prev = delptr;
				delptr = delptr->next;
			}
			prev->next = delptr->next;
			

		}
			
	}
};



int main()
{
	LinkedList lst;
	if (lst.isempty())
		cout << "The List is Empty\n";
	else
		cout << "The List contains" << lst.Count() << endl;

	int item;
	cout << " Enter Item to Insert in the List \n";
	cin >> item;
	lst.InsertFirst(item);
	lst.Display();
	cout << " Enter Item to Insert in the List \n";
	cin >> item;
	lst.InsertFirst(item);
	lst.Display();
	cout << " Enter Item to Insert in the List \n";
	cin >> item;
	lst.InsertFirst(item);
	lst.Display();
	cout << "The List contains" << lst.Count() << endl;

	cout << " Enter Item to Search in the List \n";
	cin >> item;
	if (lst.isfound(item))
		cout << "item Found\n";
	else
		cout << "item not Found\n";

	/*int newvalue;
	cout << "Enter Item and New Value to insert\n";
	cin >> item;
	cin >> newvalue;
	lst.insertbefore(item, newvalue);
	lst.Display();*/

	/*int newvalue;
	cout << "Enter New Value to Append\n";
	cin >> newvalue;
	lst.Append(newvalue);
	lst.Display();*/

	int newvalue;
	cout << "Enter item to delete \n";
	cin >> item;
	lst.Delete(item);
	lst.Display();
}
