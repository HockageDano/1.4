#include <iostream>
#include <string>

using namespace std;


class Create {
public:
	float r;
	float a;
	float b;
	float c;
	void create() {
		cout << "������� ���i�� �i����: ";
		cin >> r;
		cout << "�� �������� ���� ���i���� ";
		cout << r;
		cout << "��!" << endl;
		cout << "-------------------------------------------" << endl;

	
		cout << "������� ������ ��������: ";
		cin >> a;
		cout << "������� ������� ��������: ";
		cin >> b;
		cout << "�� �������� ������� ������� ";
		cout << a;
		cout << "c� i �������� ";
		cout << b;
		cout << "��!" << endl;
		cout << "-------------------------------------------" << endl;

	}
};

class Ring {
public:
	int first;
	float a;
	float b;
	float c;
	float d;
	float e;
	float q;
	float w;
	float r;
	float t;
	float y;
	float u;
	float i;
	float o;
	float p;
	float s;
	void ring()
	{
		cout << "������� ���i�� �i����: ";
		cin >> o;
		cout << "�� �������� ���� ���i���� ";
		cout << o;
		cout << "��!" << endl;
		cout << "-------------------------------------------" << endl;
			cout << "�� �� ������ ��i���� �i����:" << endl;
			cout << "1.�����i�����" << endl;
			cout << "2.���������" << endl;
			cout << "3.����i�" << endl;
			cin >> a ;
			if (a == 1) {
				cout << "����i�� �� ��i���� ���������i� �� ������ �����i����� �i����:" << endl;
				cout << "������: ";
				cin >> b ;
				cout << "�i�����: ";
				cin >> c ;
				cout << "������: ";
				cin >> d ;
				cout << "������: ";
				cin >> e ;
				cout << "�� ��������� ���� �i���� �� ";
				cout << b ;
				cout << "�� ��������, ";
				cout << c ;
				cout << "�� �i�����, ";
				cout << d ;
				cout << "�� ����, ";
				cout << e ;
				cout << "�� �����. ";

			}
			if (a == 2) {
				cout << "����i�� �� ��i���� ������i� �� ������ ��������� �i����:";
cin >> q;
cout << "�� ��������� �i���� �� " << endl;
cout << q;
cout << "������i�! " << endl;
			}
			if (a == 3) {
				cout << "������� ����� ���i�� �i����: ";
				cin >> w;
				cout << "���i�� �i���� ��i����� �� ";
				cout << w;
				cout << "c�.";
			}
		}
	};
class Square {
public:
	float a;
	float b;
	float c;
	float d;
	float e;
	float q;
	float w;
	float p;
	int s;
	float f;
	float g;
	void square() {
		cout << "������� ����i� ��������: ";
		cin >> g;
		cout << "�� �������� ������� ";
		cout << g;
		cout << "c� ��  ";
		cout << g;
		cout << "��!" << endl;
		cout << "-------------------------------------------" << endl;
			cout << "�� �� ������ ��i���� �i����:" << endl;
			cout << "1.�����i�����" << endl;
			cout << "2.���������" << endl;
			cout << "3.����i�" << endl;
			cin >> a;
			if (a == 1) {
				cout << "����i�� �� ��i���� ���������i� �� ������ �����i����� �i����:" << endl;
				cout << "������: ";
				cin >> b;
				cout << "�i�����: ";
				cin >> c;
				cout << "������: ";
				cin >> d;
				cout << "������: ";
				cin >> e ;
				cout << "�� ��������� ���� �i���� ��: ";
				cout << b;
				cout << "�� ��������, ";
				cout << c;
				cout << "�� �i�����, ";
				cout << d;
				cout << "�� ����, ";
				cout << e;
				cout << "�� �����. ";

			}
			if (a == 2) {
				cout << "� ���� �i� ��������� �i����: ";
				cout << "1.��������" << endl;
				cout << "2.�i�����" << endl;
				cin >> s;
				if (s == 1) {
					cout << "����i�� �� ��i���� ������i� �� ������ ��������� �i����:";
					cin >> q;
					cout << "�� ��������� �i���� �� " << endl;
					cout << q;
					cout << "������i� ��������! " << endl;
				}
				if (s == 2) {
					cout << "����i�� �� ��i���� ������i� �� ������ ��������� �i����:";
					cin >> q;
					cout << "�� ��������� �i���� �� " << endl;
					cout << q;
					cout << "������i� �i�����! " << endl;
				}
			}
			if (a == 3) {
				cout << "������� ���i ����i�� �i����: ";
				cout << "����i�� ���� ������ ��������: ";
				cin >> w;
				cout << "����i�� ���� ������� ��������: ";
				cin >> p;
				cout << "������ ������ ��������: ";
				cout<< w;
				cout << "������� ������ ��������: ";
				cout<< p;
			}
		}
	};
class BSquare {
public:
	float a;
	float b;
	float c;
	float d;
	float e;
	float q;
	float w;
	float p;
	int s;
	float f;
	float g;
	void square() {
		cout << "������� ������ ������������: ";
		cin >> f;
		cout << "������� ������� ������������: ";
		cin >> g;
		cout << "�� �������� ����������� ������� ";
		cout << f;
		cout << "c� i �������� ";
		cout << g;
		cout << "��!" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "�� �� ������ ��i���� �i����:" << endl;
		cout << "1.�����i�����" << endl;
		cout << "2.���������" << endl;
		cout << "3.����i�" << endl;
		cin >> a;
		if (a == 1) {
			cout << "����i�� �� ��i���� ���������i� �� ������ �����i����� �i����:" << endl;
			cout << "������: ";
			cin >> b;
			cout << "�i�����: ";
			cin >> c;
			cout << "������: ";
			cin >> d;
			cout << "������: ";
			cin >> e;
			cout << "�� ��������� ���� �i���� ��: " << endl;
			cout << b;
			cout << "�� ��������; "<<endl;
			cout << c;
			cout << "�� �i�����; "<<endl;
			cout << d;
			cout << "�� ����; "<<endl;
			cout << e;
			cout << "�� �����. ";

		}
		if (a == 2) {
			cout << "� ���� �i� ��������� �i����: "<<endl;
			cout << "1.��������" << endl;
			cout << "2.�i�����" << endl;
			cin >> s;
			if (s == 1) {
				cout << "����i�� �� ��i���� ������i� �� ������ ��������� �i����:";
				cin >> q;
				cout << "�� ��������� �i���� �� " << endl;
				cout << q;
				cout << "������i� ��������! " << endl;
			}
			if (s == 2) {
				cout << "����i�� �� ��i���� ������i� �� ������ ��������� �i����:" ;
				cin >> q;
				cout << "�� ��������� �i���� �� " << endl;
				cout << q;
				cout << "������i� �i�����! " << endl;
			}
		}
		if (a == 3) {
			cout << "������� ���i ����i�� �i����: "<<endl;
			cout << "����i�� ���� ������ ������������: ";
			cin >> w;
			cout << "����i�� ���� ������� ������������: ";
			cin >> p;
			cout << "������ ������ ������������: ";
			cout << w ;
			cout << "������� ������ ������������: ";
			cout << p;
		}
	}
};


int main()
{
	setlocale(LC_ALL, "ukr");

	Create qwerty;
	Ring first;
	Square second;
	BSquare third;
	int a;
	cout << "�����i�� �i���� ��� �� ������ ��������: " << endl;
	cout << "1.����" << endl;
	cout << "2.�������" << endl;
	cout << "3.����������� " << endl;
	cin >> a;
	if (a == 1) {
		first.ring();
	}
	if (a == 2) {
		second.square();
	}
	if (a == 3) {
		third.square();
	}
	

	return 0;
}