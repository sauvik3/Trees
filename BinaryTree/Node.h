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
	
	operator T&() { return *_p_data; }
	operator T() const { return *_p_data; }

	bool operator >  (const INode<T> *n2);
	bool operator <  (const INode<T> *n2);
	bool operator <= (const INode<T> *n2);
	bool operator >= (const INode<T> *n2);
	bool operator == (const INode<T> *n2);

private:
	T *_p_data;
	int _depth;
};
