#include "list.h"
int stateMenu;
void Menu() {
	cout << "�������� ��������: \n";
	cout << "������� ������ (1)\n";
	cout << "��������� � ������� �������� ������ ���������������� �������� (2)\n";
	cout << "������� �� ������� �������� ������ ���������������� �������� (3)\n";
	cout << "�������� ������ ������� ������ �� ���������������� �������� (4)\n";
	cout << "��������� ������ ������� ������ �� ���������������� �������� (5)\n";
	cout << "�������� �������� ������ (6)\n";
	cout << "����� �� ��������� (7)\n";
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
			cout << "����� ���������� ��������� ����� � ������? (1-100)" << endl;
			cin >> num;
			system("cls");
			if (num > 100 || num < 1) {
				cout << "�������� ��������!" << endl;
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
			cout << "����������� ��������" << endl;
			break;
		}
		//system("cls");
		system("pause");
		Menu();
	}
	

	return 0;
}