#pragma once

template<typename T>
class INode
{
public:
	virtual T *getData() const = 0;
	virtual void setData(const T *ipNode) = 0;
	virtual int getDepth() const = 0;

	virtual bool operator >  (const INode<T> *n2) = 0;
	virtual bool operator <  (const INode<T> *n2) = 0;
	virtual bool operator <= (const INode<T> *n2) = 0;
	virtual bool operator >= (const INode<T> *n2) = 0;
	virtual bool operator == (const INode<T> *n2) = 0;
};

template<typename T>
class IBTree
{
public:
	virtual IBTree<T> *getLeftChild() const = 0;
	virtual IBTree<T> *getRightChild() const = 0;
	virtual INode<T> *getNode() const = 0;
	virtual void insertNode(INode<T> *ipNode) = 0;
	virtual void inorderTraverse() = 0;
};