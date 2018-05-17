#pragma once

template<typename T>
class INode
{
public:
	virtual T getData() const = 0;
	virtual int getDepth() const = 0;

private:
	T _data;
	int _depth;
};

template<typename T>
class ITree
{
public:
	virtual ITree *getLeftChild() const = 0;
	virtual ITree *getRightChild() const = 0;
	virtual INode *getNode() const = 0;

private:
	ITree *_left;
	ITree *_right;
	INode *_node;
};