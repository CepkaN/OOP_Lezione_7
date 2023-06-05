#include"Node.h"

Node::Node(int data) {
	_data = data;
	_next = nullptr;
}

Node* Node::GetNext() {
	if (_next != nullptr)
		return _next;
	return nullptr;
}

void Node::SetNext(Node* next) {
	_next = next;
}

int Node::GetData() {
	return _data;
}