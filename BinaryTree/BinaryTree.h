#pragma once
#include "TreeBase.h"

template<typename T>
class Node : INode
{
public:
	T getData() const;
	int getDepth() const;

private:
	T _data;
	int _depth;
};

template<typename T>
class BTree : ITree
{
public:
	virtual ITree *getLeftChild() const;
	virtual ITree *getRightChild() const;
	virtual INode *getNode() const;

private:
	ITree *_left;
	ITree *_right;
	INode *_node;
};