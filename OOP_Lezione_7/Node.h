#pragma once

class Node {
private:
	int _data;
	Node* _next;
public:
	Node(int data);

	void SetNext(Node* next);

	Node* GetNext();

	int GetData();
};
