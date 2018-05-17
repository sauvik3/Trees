#include "BinaryTree.h"

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
bool BTree<T>::insertNode(INode<T> *ipNode)
{
	return false;
}
//------------------------------------------------------------------
