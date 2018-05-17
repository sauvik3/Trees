#pragma once
#include "TreeBase.h"

template<typename T>
class Node : INode<T>
{
public:
	T *getData() const;
	void setData(const T *ipData);
	int getDepth() const;

	friend bool operator >  (const Node<T> &n1, const Node<T> &n2);
	friend bool operator <  (const Node<T> &n1, const Node<T> &n2);
	friend bool operator <= (const Node<T> &n1, const Node<T> &n2);
	friend bool operator >= (const Node<T> &n1, const Node<T> &n2);
	friend bool operator == (const Node<T> &n1, const Node<T> &n2);

private:
	T *_p_data;
	int _depth;
};

template<typename T> bool operator >  (const Node<T> &n1, const Node<T> &n2);
template<typename T> bool operator <  (const Node<T> &n1, const Node<T> &n2);
template<typename T> bool operator >= (const Node<T> &n1, const Node<T> &n2);
template<typename T> bool operator >= (const Node<T> &n1, const Node<T> &n2);
template<typename T> bool operator == (const Node<T> &n1, const Node<T> &n2);
