#pragma once
class MyStack
{
	struct Node {
		int value; // 5
		Node* next; // Pointer to node that contains value = 7
	};

	Node* m_top = nullptr;
	size_t m_size = 0;

public:
	MyStack()
	{
		m_top = nullptr;
		m_size = 0;
	}

	int Top() const 
	{

		if (m_top == nullptr)
			return -1;

		return m_top->value;
	}
	
	void Push(int value) //eJEMPLO DEL 7(es decir, value = 7)
	{
		//Create a NODE
		Node* node = new Node();
		node->value = value;

		//Update top Node
		if (m_top == nullptr) 
		{
			m_top = node;
		}
		else
		{
			node->next = m_top;
			m_top = node;
		}

		m_size++;
	}

	int Pop() 
	{
		if (m_top == nullptr) {
			return -1;
		}
			

		Node* nodeToRemove = m_top;
		int valueToRemove = nodeToRemove->value; //Return without

		m_top = m_top->next;

		delete nodeToRemove;
		--m_size;
		return  valueToRemove;
	}

	void Print() const
	{
		Node* copyTopPointer = m_top;
		while (copyTopPointer != nullptr)
		{
			std::cout << copyTopPointer->value << "-";
			copyTopPointer = copyTopPointer->next;
		}
		std::cout << std::endl;
	}

};

