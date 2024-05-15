#pragma once
#include <iostream>

class MyQueue
{
private:
	struct Node{
		int value;
		Node* next;
		
	
	};

	Node* m_first = nullptr;
	Node* m_last = nullptr;
	size_t m_size = 0;

public:
	MyQueue() 
	{
		m_first = nullptr;
		m_last = nullptr;
		m_size = 0;
	}

	void Push(int value) 
	{
		//Create node
		Node* node = new Node();
		node->value = value;

		
		if (m_first == nullptr) {
			m_first = node;
			m_last = node;
		}
		else
		{
			//Update last
			m_last->next = node;
			m_last = m_last->next;

		}
		m_size++;
	}

	
	int Pop() 
	{
		if (m_first == nullptr) {
			return -1;
		}

		Node* nodeToRemove = m_first;
		int valueToRemove = nodeToRemove->value;

		m_first = m_first->next;
		if (m_first == nullptr)
			m_last = nullptr;
		delete nodeToRemove;
		--m_size;
		if (m_size == 0) {
			m_last = nullptr;
		}

		return valueToRemove;


	}
	
	int Front() const {

		if (m_first == nullptr) {
			return -1;

		}
		return m_first->value;
	}

	int Back() const
	{
		if (m_last == nullptr) {
			return -1;

		}
		return m_last->value;
	}

	
	void Print() const {

		Node* first = m_first;
		
		while (first != nullptr)
		{
			std::cout << first->value;
			first = first->next;
		}
		
	}

	void Clear() {
		while (!IsEmpty()) {
			Pop();
		}
	}


	bool IsEmpty() const {
	
		return m_size == 0;
	}


};


