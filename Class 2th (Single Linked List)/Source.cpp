#include <iostream>

using namespace std;


template <typename T>
class SingleLinkedList
{
private:
	struct Node
	{
		T data;
		Node* next;
	};

	Node* head;
	Noed* tail;

	int size;

public:
	
	SingleLinkedList()
	{
		head = nullptr;
		tail = nullptr;

		size = 0;
	}

	void PushFront(T data)
	{
		Node* newNode = new Node;

		newNode->data = data;

		newNode->next = nullptr;

		if (head == nullptr && tail == nullptr)
		{
			tail = head = newNode;
			// tail = newNode;
			// head = newNode; 2줄의 문장과 문법이 같음.
		}
		else
		{
			newNode->next = head;

			head = newNode;
		}
		size++;
	}

	
	void PushBack(T data)
	{
		Node* newNode = new Node;

		newNode->data = data;

		newNode->next = nullptr;
		if (head == nullptr && tail == nullptr)
		{
			tail = head = newNode;
		}
		else
		{
			tail -> next = newNode;

			tail = newNode;
		}
		size++;
	}

	void PopFront()
	{
		if (size == 0)
		{
			cout << "List is Empty" << endl;
			return;
		}

		Node* deleteNode = nullptr;

		if (size == 1)
		{
			deleteNode = head;

			head = nulptr;

			tail = nullptr;

			delete deleteNode;
		}
		else
		{
			deleteNode = head;
			head = deleteNode->next;

			delete deleteNode;
		}
		size--;
	}

	void Show()
	{
		Node* currentNode = head;

		while (currentNode != nullptr)
		{
			cout << currentNode->data << endl;
			currentNode = currentNode->next;
		}
	}

	int Size()
	{
		return size;
	}

	~SingleLinkedList()
	{
		while (size != 0)
		{
			PopFront();
		}
	}
	

};

int main()
{
	SingleLinkedList<int> SingleLinkedList;

	SingleLinkedList.PushFront(100);
	SingleLinkedList.PushFront(99);
	SingleLinkedList.PushBack(98);

	SingleLinkedList.PopFront();

	cout << "SingleLinkedList 의 크기 : " << SingleLinkedList.Size() << endl;

	SingleLinkedList.Show();

	return 0;
}