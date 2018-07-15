#pragma once
#include "TreeBase.h"

template<typename T>
class BTree : public IBTree<T>
{
public:
	IBTree<T> *getLeftChild() const;
	IBTree<T> *getRightChild() const;
	INode<T> *getNode() const;
	void insertNode(INode<T> *ipNode);
	void inorderTraverse();

private:
	IBTree<T> *_left;
	IBTree<T> *_right;
	INode<T> *_node;
};