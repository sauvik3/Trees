#include "BinaryTree.h"

// Implementation for Node methods
template<typename T>
inline T Node<T>::getData() const
{
	return T();
}

template<typename T>
inline int Node<T>::getDepth() const
{
	return _depth;
}

// Implementation for BTree methods
template<typename T>
inline ITree * BTree<T>::getLeftChild() const
{
	return _left;
}

template<typename T>
inline ITree * BTree<T>::getRightChild() const
{
	return _right;
}

template<typename T>
inline INode * BTree<T>::getNode() const
{
	return _node;
}
