#include<iostream>
using namespace std;
                               // We knew How to Insert items to Tree and make Transversal to other Items
class Node                     //Covered Basic Operation in Any Binary Tree #
{
public:
	int data;
	Node* left, * right;

	Node(int value )
	{
		data = value;
		left = right = NULL;
	}
};

class BST
{
public:

	Node* root;

	BST()
	{
		root = NULL;
	}
	                                      // we will use recursion way , means that the function will call itself 
	Node* Insert(Node* r, int item)           // Recursion simplifies the solution very much
	{
		if (r == NULL)    //��� ����� �����
		{
			Node* newnode = new Node(item);      //����� ��� ���
			r = newnode;         //��� ����� ��� �� ����� ��� ���� �����
		}

		else if (item < r->data)          //���� ���� � ����� ����� �������� �����
			r->left = Insert(r->left, item);  // ����� ����� ������ ������ ���� �� ����� ������ �������
		                                         // � ������ ����� ������� �� ����� ������
		else
			r->right = Insert(r->right, item);  // ����� ����� ������ ������ ���� �� ����� ������ �������
		                                         // � ������ ����� ������� �� ����� ������
		return r;

	 }// more than one time , but everytime diffrent input

	//����� �� ��� ���� ����� ����� �� ��� ����� ������� ���� ���� ������� �� ������� 

	void Insert(int item)
	{
		root = Insert(root, item);
    }

	void Preorder(Node* r)//root->;left->right
	{
		if (r == NULL)
			return;
		cout << r->data << "\t";
		Preorder(r->left);
		Preorder(r->right);
	}

	void Inorder(Node* r)//left->root->right
	{
		if (r == NULL)
			return;
		Inorder(r->left);
		cout << r->data << "\t";
		Inorder(r->right);
	}

	void Postorder(Node* r)//left->right->root
	{
		if (r == NULL)
			return;
		Postorder(r->left);
		Postorder(r->right);
		cout << r->data << "\t";
		
	}

	Node* Search(Node* r, int key)
	{
		if (r == NULL)
			return NULL;
		else if (r->data == key)
			return r;
		else if (key < r->data)
			return Search(r->left, key);
		else
			return Search(r->right, key);
	}

	bool Search(int key)
	{
		Node* result = Search(root, key);
		if (result == NULL)
		return false;
		else
			return true;
	}

	Node* Findmin(Node* r)           // Recursion
	{
		if (r == NULL)
			return NULL;
		else if (r->left == NULL)
			return r;
		else
			return Findmin(r->left);

	}

	Node* Findmax(Node* r)           // Recursion
	{
		if (r == NULL)
			return NULL;
		else if (r->right == NULL)
			return r;
		else
			return Findmax(r->right);

	}

	Node* Delete(Node* r, int key)
	{
		if (r == NULL)//Empty Tree
			return NULL;
		if (key < r->data)// Item exists in left sub tree
			r->left = Delete(r->left, key);
		else if(key>r->data)// item exists in right sub tree
			r->right = Delete(r->right, key);
		else
		{
			if (r->left == NULL && r->right == NULL)// lesf node
				r = NULL;
			else if (r->left != NULL && r->right == NULL)//One child on the left
			{
				r->data = r->left->data;
				delete r->left;
				r->left = NULL;
			}
			else if (r->left == NULL && r->right != NULL)//One child on the right
			{
				r->data = r->right->data;
				delete r->right;
				r->right = NULL;
			}
			else
			{
				Node* max = Findmax(r->left); //Node has two children , so replace right or left
				r->data = max->data;
				r->left = Delete(r->left,max->data);

			}
		}
		return r;
	}

};

int main()
{
	//45,, 15, 79, 90, 10, 55, 12, 20, 50
	BST btree;
	btree.Insert(45);
	btree.Insert(15);
	btree.Insert(79);
	btree.Insert(90);
	btree.Insert(10);
	btree.Insert(55);
	btree.Insert(12);
	btree.Insert(20);
	btree.Insert(50);

	cout << "Display Tree Content \n";
	btree.Preorder(btree.root);
	//cout << "\n.............................................\n";
	//btree.Inorder(btree.root);
	//cout << "\n.............................................\n";
	//btree.Postorder(btree.root);
	//cout << "\n.............................................\n";


	//int key;
	//cout << "Enter item to Search for \n";
	//cin >> key;
	//if (btree.Search(key))
	//	cout << "Item Found \n";
	//else
	//	cout << "Sorry , item no found \n";

	//cout << "Find Minimum \n";
	//Node* min = btree.Findmin(btree.root);
	//if (min == 0) //NULL=0
	//	cout << "No Items Exist";
	//else
	//	cout << "Minimum is " << min->data << "\n";\

	//	cout << "Find Maximum \n";
	//Node* max = btree.Findmax(btree.root);
	//if (max == 0)
	//	cout << "No Items Exist";
	//else
	//	cout << "Maximum is " << max->data << "\n";


	cout << "\n Delete Items \n";
	Node* result = btree.Delete(btree.root, 12);
	cout << "Preorder After Delete 12 \n";
	btree.Preorder(result);

	cout << "\n Delete Items \n";
	result = btree.Delete(btree.root, 15);
	cout << "Preorder After Delete 15 \n";
	btree.Preorder(result);

}