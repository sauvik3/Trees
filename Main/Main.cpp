#include "BinaryTree.h"

int main()
{
	BTree<int> tree;
	tree.insertNode(5);
	tree.insertNode(3);
	tree.insertNode(7);
	tree.insertNode(2);
	tree.insertNode(1);
	tree.insertNode(8);
	tree.inorderTraverse();

	return 0;
}