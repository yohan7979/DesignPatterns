#pragma once

template<typename T>
struct Node
{
	Node* next;
	T data;

	Node(T _data) : data(_data), next(nullptr) {}
};

template<typename T>
class LinkedList
{

private:
	Node<T>* head;

public:
	LinkedList() : head(nullptr) {}
	~LinkedList() {}

	Node<T>* GetHead() const { return head; }

public:
	inline void add(T data)
	{
		Node<T>* newNode = new Node<T>(data);

		// first add
		if (head == nullptr)
		{
			head = newNode;
		}
		// add next
		else
		{
			// find last pointer
			Node<T>* current = head;
			while (current->next != nullptr)
			{
				current = current->next;
			}

			// add new node at last pointer
			current->next = newNode;
		}
	}

	inline void remove(T data)
	{
		Node<T>* delNode = nullptr;

		// if head is same, just delete
		if (head->data == data)
		{
			delNode = head;
			head = head->next;
			delete delNode;
		}

		// search data
		else
		{
			Node<T>* current = head;
			while (current->next != nullptr)
			{
				// if data is same, delete and reconnect next pointer
				if (current->next->data == data)
				{
					delNode = current->next;
					current->next = current->next->next;
					delete delNode;
				}

				current = current->next;
			}
		}
		
	}

	inline void removeAll()
	{
		Node<T>* delNode = nullptr;

		while (head != nullptr)
		{
			delNode = head;
			head = head->next;
			delete delNode;
		}
	}
};