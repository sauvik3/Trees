#pragma once

template<typename T>
class Node
{
public:
	T getData() const;
	void setData(const T &iData);
	int getDepth() const;
	Node(const T &iData);

	bool operator >  (const Node<T> &n2);
	bool operator <  (const Node<T> &n2);
	bool operator <= (const Node<T> &n2);
	bool operator >= (const Node<T> &n2);
	bool operator == (const Node<T> &n2);

private:
	T _data;
	int _depth;
};
