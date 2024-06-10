#pragma once

template <typename T>
class Node
{
public:
	Node(T value) : data(value), next(nullptr) {}
	T data;
	Node* next;
	void toString()
	{
		std::cout << data << std::endl;
	}

};