#include "BinaryTree.h"
#include <iostream>

//------------------------------------------------------------------
// Implementation for BTree methods
//------------------------------------------------------------------
template<typename T>
inline IBTree<T> * BTree<T>::getLeftChild() const
{
	return _left;
}

template<typename T>
inline IBTree<T> * BTree<T>::getRightChild() const
{
	return _right;
}

template<typename T>
inline INode<T> * BTree<T>::getNode() const
{
	return _node;
}

template<typename T>
void BTree<T>::insertNode(INode<T> *ipNode)
{
	if (_node == nullptr) {
		_node = ipNode;
	}
	else if (ipNode < _node) {
		if (_left == nullptr) {
			_left = new BTree<T>();
		}
		_left->insertNode(ipNode);
	}
	else if (ipNode > _node) {
		if (_right == nullptr) {
			_right = new BTree<T>();
		}
		_right->insertNode(ipNode);
	}
}

template<typename T>
void BTree<T>::inorderTraverse()
{
	if (_left != nullptr) {
		_left->inorderTraverse();
	}
	if (_node != nullptr) {
		std::cout << *_node->getData() << std::endl;
	}
	if (_right != nullptr) {
		_right->inorderTraverse();
	}
}

// Specialize to 'int' by default
template class BTree<int>;
//------------------------------------------------------------------
