#pragma once
#include "TreeBase.h"

template<typename T>
class Node : public INode<T>
{
public:
	T *getData() const;
	void setData(const T *ipData);
	int getDepth() const;
	Node(T iData);
	~Node();

	friend bool operator >  (const INode<T> &n1, const INode<T> &n2);
	friend bool operator <  (const INode<T> &n1, const INode<T> &n2);
	friend bool operator <= (const INode<T> &n1, const INode<T> &n2);
	friend bool operator >= (const INode<T> &n1, const INode<T> &n2);
	friend bool operator == (const INode<T> &n1, const INode<T> &n2);

	operator T&() { return *_p_data; }
	operator T() const { return *_p_data; }

private:
	T *_p_data;
	int _depth;
};

template<typename T> bool operator >  (const INode<T> &n1, const INode<T> &n2);
template<typename T> bool operator <  (const INode<T> &n1, const INode<T> &n2);
template<typename T> bool operator >= (const INode<T> &n1, const INode<T> &n2);
template<typename T> bool operator >= (const INode<T> &n1, const INode<T> &n2);
template<typename T> bool operator == (const INode<T> &n1, const INode<T> &n2);
