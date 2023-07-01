#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	Node(string i, Node* l, Node* r) { //Constructor for the node class
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree {
public:
	Node* ROOT;

	BinaryTree() {
		ROOT = NULL; //Initializing ROOT to NULL
	}

	void insert(string element) { //Insert a node in the binary tree

		Node* newNode = new Node(element, NULL, NULL); //Allocate memory the new Node
		newNode->info = element; //Assign value to the data field of the new Node
		newNode->leftchild = NULL; //Make the left child of the new node point to NULL
		newNode->rightchild = NULL; //Make the right child of the new node point to NULL

		Node* parent = NULL;
		Node* currentNode = NULL;
		search(element, parent, currentNode); //Locate the node which will be the parent of the node to be inserted

		if (parent == NULL) { //If the parent is NULL (Tree is empty)
			ROOT = newNode; //Mark the new node as ROOT
			return; //Exit
		}
		if (element < parent->info) { //If the value in the data field of the new node is less than that of the parent 
			parent->leftchild = newNode; //Make the left child of the parent point to the new node
		}
		else if (element > parent->info) { //If the value in the data field of the new node is greater than that of the parent
			parent->rightchild = newNode; //Make the right child of the parent pointto thenew node
		}
	}

	void search(string element, Node*& parent, Node*& currentNode) { //This function searches the cuurentNode of the specified Node current Node of its parent
		currentNode = ROOT;
		parent = NULL;
		while ((currentNode != NULL) && (currentNode->info != element)) {
			parent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->leftchild;
			else
				currentNode = currentNode->rightchild;
		}
	
	}
	void inorder(Node* ptr) {
		if (ROOT == NULL) {
			cout << "Tree is emprty" << endl;
			return;
		}
		if (ptr != NULL) {
			inorder(ptr->leftchild);
			cout << ptr->info << " ";
			inorder(ptr->rightchild);
		}
	}


	void preorder(Node* ptr) {
		if (ROOT == NULL) {
			cout << "Tree is emprty" << endl;
			return;
		}
		if (ptr != NULL) {
			cout << ptr->info << " ";
			preorder(ptr->leftchild);
			preorder(ptr->rightchild);
		}
	}

	void preorder(Node* ptr) {
		if (ROOT == NULL) {
			cout << "Tree is emprty" << endl;
			return;
		}
		if (ptr != NULL) {
			cout << ptr->info << " ";
			preorder(ptr->leftchild);
			preorder(ptr->rightchild);
		}
	}
};