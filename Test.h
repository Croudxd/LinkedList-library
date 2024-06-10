#pragma once
#include <iostream>
#include <cassert>
#include <sstream>
#include <vector>
#include <stdexcept>

class Test
{

public:
	Test()
	{

	}
	void TestIntList()
	{

		LinkedList<int> IntegerList;
		IntegerList.add(1);
		IntegerList.add(2);
		IntegerList.add(3);
		IntegerList.add(4);
		IntegerList.add(5);
		sizeTest(IntegerList, 5);
		std::vector<int> expOut = { 1, 2, 3, 4, 5 }; 
		listValidityTest(IntegerList, expOut);
	}
	void TestDoubleList()
	{
		LinkedList<double> DoubleList;
		DoubleList.add(1.1);
		DoubleList.add(2.3);
		DoubleList.add(3.1);
		DoubleList.add(4.123);
		DoubleList.add(5.12123);
		sizeTest(DoubleList, 5);
		std::vector<double> expOut = { 1.1, 2.3, 3.1, 4.123, 5.12123 };
		listValidityTest(DoubleList, expOut);

	}
	void TestStringList()
	{
		LinkedList<std::string> StringList;
		StringList.add("Hello");
		StringList.add("world");

		sizeTest(StringList, 2);
		std::vector<std::string> expOut = {"Hello", "world"};
		listValidityTest(StringList, expOut);
	}
	void TestCharList()
	{
		LinkedList<char> CharList;
		CharList.add('a');
		CharList.add('b');
		CharList.add('c');
		CharList.add('d');

		sizeTest(CharList, 4);
		std::vector<char> expOut = {'a', 'b', 'c', 'd'};
		listValidityTest(CharList, expOut);
	}

	void run()
	{
		const std::string GREEN = "\033[32m";
		const std::string RESET = "\033[0m";
		const std::string RED = "\033[31m";

			TestIntList();
			TestDoubleList();
			TestCharList();
			TestStringList();

		std::cout << GREEN << "[PASSED TESTS]" << RESET << std::endl;
	}



private:
	template<typename T>
	void sizeTest(LinkedList<T>& list, int expectedOutput)
	{
		int size = list.size() +1;
		assert(size == expectedOutput);
	}

	template<typename T>
	void listValidityTest(LinkedList<T>& list, std::vector<T> expectedOutput)
	{
		Node<T>* head = list.getHead();

		std::vector<T> listData;

		if (head == nullptr)
		{
			return;
		}
		else
		{
			Node<T>* current = head;
			while (current != nullptr)
			{
				listData.push_back(current->data);
				current = current->next;
			}
		}
		
		assert(listData == expectedOutput);
	}
};