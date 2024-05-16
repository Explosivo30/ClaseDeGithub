#pragma once
#include<iostream>

struct Node {
	int m_value;
	Node* m_prev;
	Node* m_next;
};

//PILAS
//COLAS
//LISTAS
class MyList
{
	size_t m_size;
	Node* m_begin;
	Node* m_end;

public:
	MyList() 
	{
		m_size = 0;
		m_begin = nullptr;
		m_end = nullptr;

	}

	bool IsEmpty() const
	{
		return m_size == 0;
	}

	void Insert(Node* it, int value)// Insert (list.Begin(), 13 );
	{
		Node* node = new Node();
		node->m_value = value;

		if (IsEmpty())
		{
			m_begin = node;
			m_end = node;
		}
		else
		{
			//PrevNode: @13
			//node: @5
			//it: @7
			//NUMBERS ARE AN EXAMPLE
			Node* prevNode = it->m_prev;
			if (prevNode == nullptr)
			{
				//m_begin->m_prev = node
				//node->m_next = m_begin;
				//m_begin = node
				it->m_prev = node;
				node->m_next = it;

				m_begin = node;

			}
			else
			{
				//13 5 7
				//CONECT 13 TO 5
				prevNode->m_next = node;
				node->m_prev = prevNode;
				//CONECT 5 TO 7
				node->m_next = it;
				it->m_prev = node;
			}
		}
		++m_size;

	}

	//@= direccion

	void Erase(Node* it) // it= @5
	{
		if (it == nullptr)
			return;

		Node* prevNode = it->m_prev;//Prev Node @13
		Node* nextNode = it->m_next; //nextNode @7

		if (prevNode != nullptr)
		{
			prevNode->m_next = nextNode;
		}
		else
		{
			m_begin = it->m_next;
		}

		if (nextNode != nullptr)
		{
			nextNode->m_prev = prevNode;
		}
		else
		{
			m_end = it->m_prev;
		}

		delete it;
		--m_size;
	}

	Node* Front() 
	{
		return m_begin;
	}

	Node* Back()
	{
		return m_end;
	}

	Node* Advance(int value)
	{
		Node* it = m_begin;
		int i = 0;
		while (i < value) {
			it = it->m_next;
			++i;
		}
		return it;
	}

	void Print()
	{
		Node* it = m_begin;
		while (it != nullptr)
		{
			std::cout << it->m_value << " ";
			it = it->m_next;
		}
		std::cout << std::endl;
	}

	void ReversePrint()
	{
		Node* it = m_end;
		while (it != nullptr)
		{
			std::cout << it->m_value << " ";
			it = it->m_prev;
		}
		std::cout << std::endl;
	}

};

//lifo

