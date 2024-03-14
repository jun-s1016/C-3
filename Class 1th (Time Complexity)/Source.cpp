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
	}
	~SingleLinkedList()
	{

	}
	

};

int main()
{


	return 0;
}