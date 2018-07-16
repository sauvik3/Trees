#include "Node.h"

//------------------------------------------------------------------
// Implementation for Node methods
//------------------------------------------------------------------
template<typename T>
inline T Node<T>::getData() const
{
	return _data;
}

template<typename T>
void Node<T>::setData(const T &iData)
{
	_data = iData;
}

template<typename T>
inline int Node<T>::getDepth() const
{
	return _depth;
}

template<typename T>
Node<T>::Node(const T &iData) : _depth(0), _data(iData) { }

template<typename T>
bool Node<T>::operator>(const Node<T> &n2)
{
	return this->getData() > n2.getData();
}

template<typename T>
bool Node<T>::operator<(const Node<T> &n2)
{
	return this->getData() < n2.getData();
}

template<typename T>
bool Node<T>::operator<=(const Node<T> &n2)
{
	return this->getData() <= n2.getData();
}

template<typename T>
bool Node<T>::operator>=(const Node<T> &n2)
{
	return this->getData() >= n2.getData();
}

template<typename T>
bool Node<T>::operator==(const Node<T> &n2)
{
	return this->getData() == n2.getData();
}

// Specialize to 'int' by default
template class Node<int>;
//------------------------------------------------------------------
