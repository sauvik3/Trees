#include "Node.h"

//------------------------------------------------------------------
// Implementation for Node methods
//------------------------------------------------------------------
template<typename T>
inline T * Node<T>::getData() const
{
	return _p_data;
}

template<typename T>
void Node<T>::setData(const T *ipData)
{
	_p_data = ipData;
}

template<typename T>
inline int Node<T>::getDepth() const
{
	return _depth;
}
//------------------------------------------------------------------


//------------------------------------------------------------------
// Global relational operators for Node class
//------------------------------------------------------------------
template<typename T>
bool operator>(const Node<T>& n1, const Node<T>& n2)
{
	return n1._data > n2._data;
}

template<typename T>
bool operator<(const Node<T>& n1, const Node<T>& n2)
{
	return n1._data < n2._data;
}

template<typename T>
bool operator<=(const Node<T>& n1, const Node<T>& n2)
{
	return n1._data <= n2._data;
}

template<typename T>
bool operator>=(const Node<T>& n1, const Node<T>& n2)
{
	return n1._data >= n2._data;
}

template<typename T>
bool operator==(const Node<T>& n1, const Node<T>& n2)
{
	return n1._data == n2._data;
}
//------------------------------------------------------------------
