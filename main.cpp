#include "list.h"
int stateMenu;
void Menu() {
	cout << "Выберите действие: \n";
	cout << "Создать список (1)\n";
	cout << "Прибавить к каждому элементу списка пользовательское значение (2)\n";
	cout << "Вычесть из каждого элемента списка пользовательское значение (3)\n";
	cout << "Умножить каждый элемент списка на пользовательское значение (4)\n";
	cout << "Разделить каждый элемент списка на пользовательское значение (5)\n";
	cout << "Сравнить элементы списка (6)\n";
	cout << "Выход из программы (7)\n";
	cin >> stateMenu;
	system("cls");
}
int main() {
	setlocale(LC_ALL, "Rus");
	list list1;
	/*list list2(10, 7);
	list1.Print();
	cout << endl;
	list2.Print();
	cout << endl;
	list1.getptr();
	cout << endl;
	list2.Print();*/
	

	
	Menu();
	while (stateMenu != 7) {
		switch (stateMenu) {
		case 1: {
			int num;
			loop1:
			cout << "Какое количество элементов будет в списке? (1-100)" << endl;
			cin >> num;
			system("cls");
			if (num > 100 || num < 1) {
				cout << "Неверное значение!" << endl;
				goto loop1;
			}
			srand(time(0));
			for (int i = 0; i <= num; i++) {
				int x = 1 + rand() % 100;
				list1.Add(x);
			}
			list1.Print();
			break;
		}
		default:
			cout << "Неизвестное действие" << endl;
			break;
		}
		//system("cls");
		system("pause");
		Menu();
	}
	

	return 0;
}