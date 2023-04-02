#include "Work.h"
#pragma once


class Node
{
public:
	Node* pNext;
	TObject* data;
	Node(TObject* = nullptr, Node* = nullptr);
};

class List : public TObject
{
public:
	List();
	List(string);
	~List();

	void Add(TObject*);		
	void Clear();		
	TObject* operator [] (const int);
	void Show();

private:
	int listSize = 0;
public:
	Node* head;
	string name;
};