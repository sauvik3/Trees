#pragma once
#include "TreeBase.h"

#define DEBUG

#ifdef DEBUG
#include "trace.h"
#endif

template<typename T>
class BTree : public IBTree<T>
{
public:
	IBTree<T> *getLeftChild() const;
	IBTree<T> *getRightChild() const;
	Node<T> *getNode() const;
	void insertNode(const T &iData);
	void inorderTraverse();
	void deleteAllNodes();

	BTree() :_pNode(nullptr), _left(nullptr), _right(nullptr) {}
	~BTree();

private:
	IBTree<T> *_left;
	IBTree<T> *_right;
	Node<T> *_pNode;
};