#pragma once
#include "TreeBase.h"

template<typename T>
class BTree : IBTree<T>
{
public:
	IBTree<T> *getLeftChild() const;
	IBTree<T> *getRightChild() const;
	INode<T> *getNode() const;
	bool insertNode(INode<T> *ipNode);

private:
	IBTree<T> *_left;
	IBTree<T> *_right;
	INode<T> *_node;
};