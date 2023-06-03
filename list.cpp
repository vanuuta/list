#include "list.h"


// ����������� �� ���������
list::list() {
	Head = NULL; Tail = NULL; Next = NULL; size = 0; field = 0;
}


//����������� � ����� ��������� 
list::list(int a) {
	size = 1;
	Head = Tail = this;
	this->field = a;
	Next = this;
}


// ����������� � 2 ����������� 
list::list(int Size, int value) {
	size = Size;
	for (int i = 0; i < size; i++) {
		list* temp = new list;
		temp->Next = Head;
		temp->field = value;
		if (Head != NULL) {
			Tail->Next = temp;
			Tail = temp;
		}
		else Head = Tail = temp;
	}
}


//�����������  (�������� ������ ������� ��������� ������������� ���������� �������)
//list::list(short a) {
//	srand(time(0));
//	list* node = new list[a];
//
//}


//���������� ����
void list::Add(int x) {
	size++;
	list* temp = new list;
	temp->Next = Head;
	temp->field = x;
	if (Head != NULL) {
		Tail->Next = temp;
		Tail = temp;
	}
	else Head = Tail = temp;
	
}


//����� ���� ������
void list::Print() {
	list* temp = Head;
	int i = size;
	do 
	{
		cout << temp->field << " ";
		temp = temp->Next;
		i--;
	} while (i!=0);
	cout << endl;
	
}


//���������� +
list list::operator+(int x) {
	list* temp = Head;
	do {
		temp->field += x;
		temp = temp->Next;
	} while (temp->Next!=Head);
	return *temp;
}