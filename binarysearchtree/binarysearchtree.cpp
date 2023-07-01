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
};