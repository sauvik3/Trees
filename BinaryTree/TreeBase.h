#pragma once
#include "Node.h"

template<typename T>
class IBTree
{
public:
	virtual IBTree<T> *getLeftChild() const = 0;
	virtual IBTree<T> *getRightChild() const = 0;
	virtual Node<T> *getNode() const = 0;
	virtual void insertNode(const T &iData) = 0;
	virtual void inorderTraverse() = 0;
	virtual void deleteAllNodes() = 0;
};