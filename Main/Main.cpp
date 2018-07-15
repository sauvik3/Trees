#include "BinaryTree.h"
#include "Node.h"

int main()
{
	BTree<int> tree;

	tree.insertNode(new Node<int>(5));
	tree.insertNode(new Node<int>(3));
	tree.insertNode(new Node<int>(7));
	tree.insertNode(new Node<int>(2));
	tree.insertNode(new Node<int>(1));
	tree.insertNode(new Node<int>(8));

	tree.inorderTraverse();

	return 0;
}