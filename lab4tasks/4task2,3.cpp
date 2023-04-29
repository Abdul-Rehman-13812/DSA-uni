#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = NULL;
	}
};

class LinkedList {
private:
	Node* head;
	Node* tail;
	int listSize;

public:
	LinkedList() {
		head = NULL;
		tail = NULL;
		listSize = 0;
	}

	int front() {
		if (head != NULL) {
			return head->data;
		}
		return -1; 
	}

	int back() {
		if (tail != NULL) {
			return tail->data;
		}
		return -1; 
	}

	void insertAtFront(int val) {
		Node* newNode = new Node(val);
		newNode->next = head;
		head = newNode;
		if (tail == NULL) {
			tail = newNode;
		}
		listSize++;
	}

	void insertAtEnd(int val) {
		Node* newNode = new Node(val);
		if (tail == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail->next = newNode;
			tail = newNode;
		}
		listSize++;
	}

	int removeFromFront() {
		if (head != NULL) {
			Node* temp = head;
			int val = temp->data;
			head = head->next;
			if (head == NULL) {
				tail = NULL;
			}
			delete temp;
			listSize--;
			return val;
		}
		return -1; 
	}

	int removeFromEnd() {
		if (tail != NULL) {
			if (head == tail) { 
				int val = tail->data;
				delete tail;
				head = NULL;
				tail = NULL;
				listSize--;
				return val;
			}
			else {
				Node* temp = head;
				while (temp->next != tail) {
					temp = temp->next;
				}
				int val = tail->data;
				delete tail;
				tail = temp;
				tail->next = NULL;
				listSize--;
				return val;
			}
		}
		return -1; 
	}

	bool empty() {
		return (head == NULL && tail == NULL);
	}

	int size() {
		return listSize;
	}

	//task 3
	void LinkedList::insertSorted(int data) {
		Node* newNode = new Node(data);

		if (head == nullptr || data < head->data) {
			newNode->next = head;
			head = newNode;
		}
		else {
			Node* current = head;
			while (current->next != nullptr && current->next->data < data) {
				current = current->next;
			}
			newNode->next = current->next;
			current->next = newNode;
		}

		if (newNode->next == nullptr) {
			tail = newNode;
		}
	}


};

int main() {
	LinkedList list;

	list.insertAtFront(1);
	list.insertAtFront(2);
	list.insertAtEnd(3);
	list.insertAtEnd(4);

	cout << "Front: " << list.front() << endl;
	cout << "Back: " << list.back() << endl;
	cout << "Size: " << list.size() << endl;

	cout << "Removing from front: " << list.removeFromFront() << endl;
	cout << "Removing from end: " << list.removeFromEnd() << endl;

	cout << "Front: " << list.front() << endl;
	cout << "Back: " << list.back() << endl;
	cout << "Size: " << list.size() << endl;

	return 0;
}
