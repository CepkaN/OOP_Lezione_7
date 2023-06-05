#include"Linked.h"

LinkedList::LinkedList() {
	_head = nullptr;
	_tail = nullptr;
	_numberElements = 0;
}

void LinkedList::Push_back(int data) {
	Node* newNode = new Node(data);
	_numberElements++;
	if (_head == nullptr) {
		_head = newNode;
		_tail = newNode;
		return;
	}
	newNode->SetNext(_tail);
	_tail = newNode;
}

void LinkedList::ShowList() {
	for (Node* ptr = _tail; ptr != _head->GetNext(); ptr = ptr->GetNext())
		std::cout << ptr->GetData() << '\n';
}


Node* LinkedList::SearchByIndex(int index) {
	Node* ptr = _tail;
	int count = _numberElements - index;
	index = _numberElements;
	while (count > 0) {
		ptr = ptr->GetNext();
		count--;
	}
	return ptr;
}

void LinkedList::PushByIndex(int data, int index) {
	Node* newNode = new Node(data);
	_numberElements++;
	Node* elementIndex = SearchByIndex(index);
	Node* element = SearchByIndex(index+1);
	element->SetNext(newNode);
	newNode->SetNext(elementIndex);
}