#pragma once
#include "Node.h"

template<class T>
class LinkedList
{
public:
	LinkedList() : head(nullptr){}
	LinkedList(const LinkedList&) = default;
	LinkedList<T>& operator=(const LinkedList& other) = default;
	~LinkedList();
	void add(T value);
	void print();
	int size();
	void sort();
	Node<T>* getHead();


private:
	Node<T>* head;

};


template<typename T>
LinkedList<T>::~LinkedList() {
	Node<T>* current = head;
	while (current != nullptr)
	{
		Node<T>* next = current->next;
		delete current;
		current = next;
	}

	head = nullptr;
}

template<typename T>
void LinkedList<T>::add(T value)
{
	Node<T>* newNode = new Node<T>(value);
	if (head == nullptr)
	{
		newNode->next = nullptr;
		head = newNode;
	}
	else
	{
		Node<T>* current = head;
		while (current->next != nullptr)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}

template<typename T>
void LinkedList<T>::print()
{
	if (head == nullptr)
	{
		std::cout << "null linked list..." << std::endl;
	}
	else
	{
		Node<T>* current = head;
		while (current != nullptr)
		{
			current->toString();
			current = current->next;
		}
	}
}

template<typename T>
int LinkedList<T>::size()
{
	int size = -1;
	if (head == nullptr)
	{
		return 0;
	}
	else
	{
		Node<T>* current = head;
		while (current != nullptr)
		{
			size++;
			current = current->next;
		}
	}
	return size;
}

template<typename T>
void LinkedList<T>::sort()
{

}

template<typename T>
Node<T>* LinkedList<T>::getHead()
{
	return this->head;
}
