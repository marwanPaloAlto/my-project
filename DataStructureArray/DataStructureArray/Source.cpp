#include <iostream>
using namespace std;
class Array //Used create, fill, display, getsize, getlength, Search, Append, Insert, Delete, Enlarge and Merge operations
{               
	             //insert and delete operations take long time, that is why using linked lists is better
	              // specially when the array has 100 items to 10,000 or even more.Shifting is the case.
private:
	int size;
	int length;
	int* items;
public:
	Array(int arrsize)
	{
		size = arrsize;
		length = 0;
		items = new int[arrsize];
	}
	void Fill()
	{
		int no_of_itmes;
		cout << "How many items you want to fill?\n";
		cin >> no_of_itmes;
		if (no_of_itmes > size)
		{
			cout << "You cannot exceed array size\n";
			return;
		}
		else
		{
			for (int i=0 ; i < no_of_itmes; i++)
			{
			cout << "Enter item no" << i << endl;
			cin >> items[i];
			length++;
			}
		}

	}
	void Display()
	{
		cout << "Display Array content\n";
for (int i = 0; i < length; i++)
{
	cout << items[i] << "\t";
}
cout << endl;
	}
	int getSize()
	{
		return size;
	}
	int getLength()
	{
		return length;
	}
	int Search(int key)
	{
		int index = -1;
		for (int i = 0; i < length; i++)
		{
			if (items[i] == key)
			{
				index = i;
				break;
			}
		}
		return index;
	}
	void Append(int newitem)
	{
		if (length < size)
		{
			items[length] = newitem;
			length++;
		}
		else
			cout << "Array is Full\n";
	}
	void insert(int index, int newitem)
	{
		if (index >= 0 && index < size)
		{
			for (int i = length; i > index; i--)
			{
				items[i] = items[-1];
			}
			items[index] = newitem;
			length++;
		}
		else
		{
			cout << "Error-Index out of Range\n";
		}
	}
	void Delete(int index)
	{
		if (index >= 0 && index < size)
		{
			for (int i = index; i < length - 1; i++)
				items[i] = items[i + 1];
			length--;
		}
		else
			cout << "Index out of Array Range\n";
	}
	void Enlarge(int newsize)
	{
		if (newsize <= size)   //always check and validate in any method the user input for less exceptions*
		{
			cout << "New size must be larger than current size\n";
			return;
		}
		else
		{
			size = newsize; //new array size
			int* old = items;  // we made a pointer to still have access on old array for copying old itmes to new array.
			items = new int(newsize);       // we made the new array
			for (int i = 0; i < length; i++)  //for loop to copy items of old array to new array
			{
				items[i] = old[i];   // grap old items and put them in new array
			}
			delete[]old; // the step in which we delete the old array
			// for the heap to keep clean when making new variables or items
		}
	}
	void Merge(Array other)  // give another array named other for example
	{
		int newsize = size + other.getSize();   // new size
		size = newsize;  // size now for yhe array consited of the two merged arraies
		int* old = items; // pointer to point to the old array
		items = new int[newsize]; //making new array with the new size
		int i;
		for (i = 0; i < length; i++) // making loof to pass on old array items and copy them
		{
			items[i] = old[i]; // from old to new array #copied
		}
		delete[]old; // old array deleted , heap cleaned
		int j = i; //i is last index(place) reached , and here the j is that so 
		for (int i = 0; i < other.getLength(); i++)  //
		{
			items[j++] = other.items[i];  // completeing moving arrays from last index reached in "other" array
			length++;                       // and put them in the new array
		}
	}
};

int main()
{
	cout << "Hello This is Array ADT demo\n";
	int arraysize;                               //input from user
	cout << "Enter the Array Size\n";
	cin >> arraysize;
	Array myarray(arraysize);     //Length is very important to not display rubbish
	myarray.Fill();
	cout << "Array Size = " << myarray.getSize() << " while length = " << myarray.getLength() << "\n";
	myarray.Display();
	
	/*cout<<"Enter the value to Search for\n";
	int key;
	cin >> key;
	int index = myarray.Search(key);
	if (index == -1)
		cout << "Item not found\n";
	else
		cout << "Item found @ position " << index << endl;*/
	
	/*int newitem;
	cout << "Enter new item to add to arry \n";
	cin >> newitem;
	myarray.Append(newitem);
	myarray.Display();*/
	
	/*cout << "Enter Index and item\n";
	cin >> index;
	cin >> newitem;
	myarray.insert(index, newitem);
	myarray.Display();
	cout << "Array Size = " << myarray.getSize() << " while length = " << myarray.getLength() << "\n";*/

	/*cout << "Enter Index to delete its item\n";
	cin >> index;
	myarray.Delete(index);
	myarray.Display();
	cout << "Array Size = " << myarray.getSize() << " while length = " << myarray.getLength() << "\n";*/

	/*int newsize;
	cout<<"Enter New Size\n";
	cin >> newsize;
	myarray.Enlarge(newsize);
	cout << "Array Size = " << myarray.getSize() << " while length = " << myarray.getLength() << "\n";
	myarray.Display();*/

	cout << "The New Array Other : \n";
	Array other(3);
	other.Fill();
	myarray.Merge(other);
	cout << "Array Size = " << myarray.getSize() << " while length = " << myarray.getLength() << "\n";
	myarray.Display();

}