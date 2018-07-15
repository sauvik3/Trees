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
	if (_p_data != nullptr) {
		delete _p_data;
	}
	_p_data = new T(*ipData);
}

template<typename T>
inline int Node<T>::getDepth() const
{
	return _depth;
}

template<typename T>
Node<T>::Node(T iData) : _depth(0)
{
	_p_data = new T(iData);
}

template<typename T>
Node<T>::~Node()
{
	if (_p_data != nullptr) {
		delete _p_data;
	}
}

template<typename T>
bool Node<T>::operator>(const INode<T>* n2)
{
	return _p_data > n2->getData();
}

template<typename T>
bool Node<T>::operator<(const INode<T>* n2)
{
	return _p_data < n2->getData();
}

template<typename T>
bool Node<T>::operator<=(const INode<T>* n2)
{
	return _p_data <= n2->getData();
}

template<typename T>
bool Node<T>::operator>=(const INode<T>* n2)
{
	return _p_data >= n2->getData();
}

template<typename T>
bool Node<T>::operator==(const INode<T>* n2)
{
	return _p_data == n2->getData();
}

// Specialize to 'int' by default
template class Node<int>;
//------------------------------------------------------------------
