#include <iostream>
using namespace std;
class Node {
public:
	int data;
	Node* next;

	Node(int data) : data(data), next(nullptr) {}
};

class LinkedList {
protected:
	Node* head;
	Node* tail;

public:
	LinkedList() : head(nullptr), tail(nullptr) {}

	virtual void insertAtFront(int data) = 0;

	virtual void insertAtEnd(int data) = 0;

	virtual int removeFromFront() = 0;

	virtual int removeFromEnd() = 0;
};

class MyLinkedList : public LinkedList {
public:
	MyLinkedList() : LinkedList() {}

	void insertAtFront(int data) override {
		Node* newNode = new Node(data);
		if (this->head == nullptr) {
			this->head = this->tail = newNode;
		}
		else {
			newNode->next = this->head;
			this->head = newNode;
		}
	}

	void insertAtEnd(int data) override {
		Node* newNode = new Node(data);
		if (this->head == nullptr) {
			this->head = this->tail = newNode;
		}
		else {
			this->tail->next = newNode;
			this->tail = newNode;
		}
	}

	int removeFromFront() override {
		if (this->head == nullptr) {
			throw "List is empty";
		}
		int data = this->head->data;
		Node* temp = this->head;
		if (this->head == this->tail) {
			this->head = this->tail = nullptr;
		}
		else {
			this->head = this->head->next;
		}
		delete temp;
		return data;
	}

	int removeFromEnd() override {
		if (this->head == nullptr) {
			throw "List is empty";
		}
		int data = this->tail->data;
		Node* temp = this->tail;
		if (this->head == this->tail) {
			this->head = this->tail = nullptr;
		}
		else {
			Node* current = this->head;
			while (current->next != this->tail) {
				current = current->next;
			}
			current->next = nullptr;
			this->tail = current;
		}
		delete temp;
		return data;
	}
};

int main() {
	MyLinkedList list;

	list.insertAtFront(1);
	list.insertAtFront(2);
	list.insertAtEnd(3);
	list.insertAtEnd(4);

	cout << "List: ";
	while (true) {
		try {
			cout << list.removeFromFront() << " ";
		}
		catch (const char* msg) {
			cerr << msg << endl;
			break;
		}
	}
	cout << endl;

	return 0;
}
