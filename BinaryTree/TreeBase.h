#pragma once

template<typename T>
class INode
{
public:
	virtual T getData() const = 0;
	virtual void setData(const INode *ipNode) = 0;
	virtual int getDepth() const = 0;
};

template<typename T>
class IBTree
{
public:
	virtual IBTree<T> *getLeftChild() const = 0;
	virtual IBTree<T> *getRightChild() const = 0;
	virtual INode<T> *getNode() const = 0;
	virtual bool insertNode(INode<T> *ipNode) = 0;
};