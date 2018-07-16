#include "BinaryTree.h"
#include <iostream>

//------------------------------------------------------------------
// Implementation for BTree methods
//------------------------------------------------------------------
template<typename T>
inline IBTree<T> * BTree<T>::getLeftChild() const
{
	return _left;
}

template<typename T>
inline IBTree<T> * BTree<T>::getRightChild() const
{
	return _right;
}

template<typename T>
inline Node<T> *BTree<T>::getNode() const
{
	return _pNode;
}

template<typename T>
void BTree<T>::insertNode(const T &iData)
{
	Node<T> *pNewNode = new Node<T>(iData);
	if (_pNode == nullptr) {
		_pNode = pNewNode;
	}
	else {
		if (*pNewNode < *_pNode) {
			if (_left == nullptr) {
				_left = new BTree<T>();
			}
			_left->insertNode(iData);
		}
		else {
			if (_right == nullptr) {
				_right = new BTree<T>();
			}
			_right->insertNode(iData);
		}
		delete pNewNode;
	}
}

template<typename T>
void BTree<T>::inorderTraverse()
{
	if (_left != nullptr) {
		_left->inorderTraverse();
	}
	if (_pNode != nullptr) {
		std::cout << _pNode->getData() << std::endl;
	}
	if (_right != nullptr) {
		_right->inorderTraverse();
	}
}

template<typename T>
void BTree<T>::deleteAllNodes()
{
	if (_left != nullptr) {
		_left->deleteAllNodes();
		delete _left;
		_left = nullptr;
	}
	if (_pNode != nullptr) {
		delete _pNode;
		_pNode = nullptr;
	}
	if (_right != nullptr) {
		_right->deleteAllNodes();
		delete _right;
		_right = nullptr;
	}
}

template<typename T>
BTree<T>::~BTree()
{
#ifdef DEBUG
	_CrtMemState s1, s2, s3;
	_CrtMemCheckpoint(&s1);
	TRACE("Checking for memory leaks...", __FILENAME__, __LINE__, __FUNCTION__);
#endif // DEBUG

	deleteAllNodes();

#ifdef DEBUG
	_CrtMemCheckpoint(&s2);
	if (_CrtMemDifference(&s3, &s1, &s2)) {
		_CrtDumpMemoryLeaks();
	}
	TRACE("Check Finished...", __FILENAME__, __LINE__, __FUNCTION__);
#endif // DEBUG

}

// Specialize to 'int' by default
template class BTree<int>;
//------------------------------------------------------------------
