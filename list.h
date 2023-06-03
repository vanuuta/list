#pragma once
#include <iostream>
#include <locale.h>
#include <ctime>
using namespace std;


//struct Node {
//	int field;
//	Node* next;
//};


class list {
private:
	/*static */int size;
	int field;
	list* Head, * Tail, *Next;
public:
	list();
	list(int a);
	list(int size, int value);
	//list(short a);
	void Add(int x);
	void Print();
	list operator+(int x);
	void getptr() {
		cout << Next->field << endl;
	}
};
