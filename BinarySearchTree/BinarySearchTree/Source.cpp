#include<iostream>
#include<string>
using namespace std;
   
class Node   //Class that represents Node;  
	
	//consists of 3 parts                            //Covered Basic Operation in Any Binary Tree #
{
public:
	char data;   //1                                                   //BST Operations:
	Node* left, * right;   //2 //3   two pointers                      //Creation
	                                                                   //Insertion
	Node(char value)  //Constructor to initialize                      //Searching
	{                                                                  //Deletion
		data = value;                                                  //Traversal => Display
		left = right = NULL;
	}
};              

int n = 1;
class BST  //Tree Class
{
public:
	// CREATION
	Node* root; //Most important thing in tree and it is a pointer points to first node of the tree

	BST() //Constructor
	{
		root = NULL;  // Means Tree is Empty
	}

	// we will use recursion way , means that the function will call itself but everytime diffrent input
	// INSERTION
	Node* Insert(Node* r, char item)    // Recursion simplifies the solution very much functtion is written in recursion
	{
		if (r == NULL)    //„⁄‰«Â« «· —Ì ›«÷Ì…
		{
			Node* newnode = new Node(item);              //Ì»ﬁ« Â⁄„·  ‰ÌÊ ‰Êœ Ê «Œ·ÌÂ« «·—Ê  » «⁄‰«
			r = newnode;                                //ﬂœÂ «·‰ÌÊ  Êœ ÂÌ «·—Ê  ·«‰ „›Ì‘ €Ì—Â«
		}

		else if (item < r->data)                     //ÃÌ‰« ‰÷Ì› Ê ·ﬁÌ‰« ⁄‰«’— „ÊÃÊœ… ›Ì «· —Ì
			r->left = Insert(r->left, item);        // ﬁ«—‰« ·ﬁÌ‰« «·«Ì „ ·ﬁÌ‰«Â «’€— „‰ «·—Ê  ÕÿÌ‰«Â ⁄«·‘„«·
												   // Ê «·Õﬁ‰« «·‰Êœ «·ÃœÌœ… ›Ì «·Ã“¡ «·‘„«·
		else
			r->right = Insert(r->right, item);   // ﬁ«—‰« ·ﬁÌ‰« «·«Ì „ ·ﬁÌ‰«Â «ﬂ»— „‰ «·—Ê  ÕÿÌ‰«Â ⁄«·Ì„Ì‰
												// Ê «·Õﬁ‰« «·‰Êœ «·ÃœÌœ… ›Ì «·Ã“¡ «·‘„«·
		return r;

	}

   //ÿ«·„« ﬂ· „—… »⁄„· «‰”—  ›Ì ‰›” «· —Ì ›«·«›÷· «⁄„· ‰”Œ… „Œ‰ ’—… „‰ «·«‰”—  
   //instead of talking a pointer from user every time we call the function , only we will take item to insert
	void Insert(char item) // we compare with root , if< = left , if> = right, then comparing with subtree roots
	{                    // and that is recursion , everything you apply to basic tree you repeat it for its sub trees
		root = Insert(root, item);     // and also inside every sub tree you compare it to its sub trees
	}

	void Preorder(Node* r)//root->;left->right   // TRAVERSAL
	{
		if (r == NULL)    //first thig check that tree already has items not empty
			return; // „‘ Â‰ﬂ„· Ê·« ‰ÿ»⁄ Õ«Ã…
		cout << r->data << "\t"; //·Ê ›Ì »Ì«‰«  „ÊÃÊœ… ›Ì «· —Ì Â‰»œ« ‰⁄„·Â« »«”·Ê» «·»—Ì«Ê—œ—
		Preorder(r->left); // apply prerder on left sub tree
		Preorder(r->right);  // apply prerder on right sub tree
	}

	void Inorder(Node* r)//left->root->right
	{
		if (r == NULL)      // same steps as preorder but coustomizing order
			return;
		Inorder(r->left);  // left
		cout << r->data << "\t";  // right
		Inorder(r->right);  //root
	}

	void Postorder(Node* r)//left->right->root
	{
		if (r == NULL)      // same steps as preorder but coustomizing order
			return;
		Postorder(r->left);
		Postorder(r->right);
		cout << r->data << "\t";

	}
	//SEARCH
	Node* Search(Node* r, char key) //Give pointer points to tree root i'll search in,and key  i'm searching for
	{
		if (r == NULL) //Check if empty
			return NULL;
		else if (r->data == key)  //equals root
			return r;
		else if (key < r->data)  // smaller than root
			return Search(r->left, key);
		else                      // greater than root
			return Search(r->right, key);
	}

	bool Search(char key) //pointer not a mist bec. we're in same tree , so taking key only from User
	{                          // root(pointer) is already taken in the basic function
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

	Node* Delete(Node* r, char key)
	{
		if (r == NULL)//Empty Tree
			return NULL;
		if (key < r->data)// Item exists in left sub tree
			r->left = Delete(r->left, key); // Delete from left and left is new delete
		else if (key > r->data)  // item exists in right sub tree
			r->right = Delete(r->right, key);  // Delete from right and right is new delete
		else
		{
			if (r->left == NULL && r->right == NULL)// leaf node
				r = NULL;
			else if (r->left != NULL && r->right == NULL)//One child on the left
			{
				r->data = r->left->data;
				delete r->left;
				r->left = NULL;
			}
			else if (r->left == NULL && r->right != NULL)//One child on the right
			{
				r->data = r->right->data;// Tking value in child and store in node
				delete r->right; // Delete child
				r->right = NULL;
			}
			else       //Node has two children , so replace  greatest left or smallest right 
			{
				Node* max = Findmax(r->left);   //greatest NODE on left using max fuction
				r->data = max->data;  //replace greatest left with max data
				r->left = Delete(r->left, max->data); // deleting max and sub tree shape is new delete

			}
		}
		return r;   //return sub tree new shape after delete
	} 

	//   VERTICAL ORDER TRANSVERSAL
	
	void findMinMax(Node* node, int* min, int* max, int hd)
	{
		// Base case
		if (node == NULL) return;

		// Update min and max
		if (hd < *min)  *min = hd;
		else if (hd > *max) *max = hd;

		// Recur for left and right subtrees
		findMinMax(node->left, min, max, hd - 1);
		findMinMax(node->right, min, max, hd + 1);
	}

	void printVerticalLine(Node* node, int line_no, int hd)
	{
		// Base case
		if (node == NULL) return;

		// If this node is on the given line number
		if (hd == line_no)
			cout << node->data << " ";

		// Recur for left and right subtrees
		printVerticalLine(node->left, line_no, hd - 1);
		printVerticalLine(node->right, line_no, hd + 1);
	}
	
	void verticalOrder(Node* root)
	{
		// Find min and max distances with resepect to root
		int min = 0, max = 0;
		findMinMax(root, &min, &max, 0);

		// Iterate through all possible vertical lines starting
		// from the leftmost line and print nodes line by line
		for (int line_no = min; line_no <= max; line_no++)
		{
			printVerticalLine(root, line_no, 0);
			cout << endl;
		}
	}

	// Number Of Nodes in the Tree

	int CountNodes(Node* root)
	{
		if (root == NULL)
			return 0;
		if (root->left != NULL)
		{
			n = n + 1;
			n = CountNodes(root->left);
		}
		if (root->right != NULL)
		{
			n = n + 1;
			n = CountNodes(root->right);
		}
		return n;
	}
};

int main()
{
	//W,, E, L, L, C, O, M, E   //items we need to store in a binary search tree 
	BST btree;   // Creating object
	btree.Insert('w');
	btree.Insert('e');
	btree.Insert('l');
	btree.Insert('l');
	btree.Insert('c');
	btree.Insert('o');
	btree.Insert('m');
	btree.Insert('e');
	

	cout << "Display Tree Content \n";
	btree.Preorder(btree.root);
	cout << "\n.............................................\n";
	btree.Inorder(btree.root);
	cout << "\n.............................................\n";
	btree.Postorder(btree.root);
	cout << "\n.............................................\n";


	char key;
	cout << "Enter item to Search for \n";
	cin >> key;
	if (btree.Search(key))
		cout << "Item Found \n";
	else
		cout << "Sorry , item no found \n";

	cout << "Find Minimum \n";
	Node* min = btree.Findmin(btree.root);
	if (min == 0) //NULL=0
		cout << "No Items Exist";
	else
		cout << "Minimum is " << min->data << "\n";\

		cout << "Find Maximum \n";
	Node* max = btree.Findmax(btree.root);
	if (max == 0)
		cout << "No Items Exist";
	else
		cout << "Maximum is " << max->data << "\n";


	cout << "\n Delete Items \n";
	Node* result = btree.Delete(btree.root, 'e');
	cout << "Preorder After Delete e \n";
	btree.Preorder(result);

	/*cout << "\n Delete Items \n";
	result = btree.Delete(btree.root, 'c');
	cout << "Preorder After Delete c \n";
	btree.Preorder(result);*/




	cout << "\n Vertical order traversal is \n";
	btree.verticalOrder(btree.root);


	cout << "Total No. of Nodes in the BST = " << btree.CountNodes(btree.root) << endl;
}