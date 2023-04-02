#include "List.h"
#include <iostream>
// List constructors
List::List()
	: name("none"), listSize(0), head(nullptr) {}

List::List(string name): name(name) {
	head = nullptr;
}

List::~List() {
	Clear();
}

// конструктор вузл≥в
Node::Node(TObject* data, Node* pNext)
	: pNext(pNext), data(data) {}

// методи
void List::Show() {
	cout << "---" << name << "---" << endl;
	Node* n = this->head;
	while (n) {
		n->data->Show();
		n = n->pNext;
	}
	cout << endl;
}

void List::Add(TObject* data) {
	if (head == nullptr) {		// якщо список порожн≥й, ми додаЇмо наш перший елемент
		head = new Node(data);
	}
	else {
		Node* current = this->head; 
		while (current->pNext) {
			current = current->pNext;
		}
		current->pNext = new Node(data);
	};
	listSize++;
}

TObject* List::operator [] (const int index) {// отримати елемент за ≥ндексом за допомогою []
	int count = 0;
	Node* current = head;
	while (count != index) {
		current = head->pNext;
		count++;
	}
	return current->data;
};

void List::Clear() {
	if (listSize == 0) {
		std::cout << "—писок пустий." << endl;
		return;
	}
}