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
		cout << "Задайте радiус фiгури: ";
		cin >> r;
		cout << "Ви створили круг радiусом ";
		cout << r;
		cout << "см!" << endl;
		cout << "-------------------------------------------" << endl;

	
		cout << "Задайте ширину квадрата: ";
		cin >> a;
		cout << "Задайте довжину квадрата: ";
		cin >> b;
		cout << "Ви створили квадрат шириною ";
		cout << a;
		cout << "cм i довжиною ";
		cout << b;
		cout << "см!" << endl;
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
		cout << "Задайте радiус фiгури: ";
		cin >> o;
		cout << "Ви створили круг радiусом ";
		cout << o;
		cout << "см!" << endl;
		cout << "-------------------------------------------" << endl;
			cout << "Як ви бажаєте змiнити фiгуру:" << endl;
			cout << "1.Перемiстити" << endl;
			cout << "2.Повернути" << endl;
			cout << "3.Розмiр" << endl;
			cin >> a ;
			if (a == 1) {
				cout << "Введiть на скiльки сантиметрiв ви бажаєте перемiстити фiгуру:" << endl;
				cout << "Вправо: ";
				cin >> b ;
				cout << "Лiворуч: ";
				cin >> c ;
				cout << "Догори: ";
				cin >> d ;
				cout << "Донизу: ";
				cin >> e ;
				cout << "Ви перенесли вашу фiгуру на ";
				cout << b ;
				cout << "см праворуч, ";
				cout << c ;
				cout << "см лiворуч, ";
				cout << d ;
				cout << "см вниз, ";
				cout << e ;
				cout << "см вверх. ";

			}
			if (a == 2) {
				cout << "Введiть на скiльки градусiв ви бажаєте повернути фiгуру:";
cin >> q;
cout << "Ви повернули фiгуру на " << endl;
cout << q;
cout << "градусiв! " << endl;
			}
			if (a == 3) {
				cout << "Задайте новий радiус фiгури: ";
				cin >> w;
				cout << "Радiус фiгури змiнений на ";
				cout << w;
				cout << "cм.";
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
		cout << "Задайте розмiр квадрата: ";
		cin >> g;
		cout << "Ви створили квадрат ";
		cout << g;
		cout << "cм на  ";
		cout << g;
		cout << "см!" << endl;
		cout << "-------------------------------------------" << endl;
			cout << "Як ви бажаєте змiнити фiгуру:" << endl;
			cout << "1.Перемiстити" << endl;
			cout << "2.Повернути" << endl;
			cout << "3.Розмiр" << endl;
			cin >> a;
			if (a == 1) {
				cout << "Введiть на скiльки сантиметрiв ви бажаєте перемiстити фiгуру:" << endl;
				cout << "Вправо: ";
				cin >> b;
				cout << "Лiворуч: ";
				cin >> c;
				cout << "Догори: ";
				cin >> d;
				cout << "Донизу: ";
				cin >> e ;
				cout << "Ви перенесли вашу фiгуру на: ";
				cout << b;
				cout << "см праворуч, ";
				cout << c;
				cout << "см лiворуч, ";
				cout << d;
				cout << "см вниз, ";
				cout << e;
				cout << "см вверх. ";

			}
			if (a == 2) {
				cout << "В який бiк повернути фiгуру: ";
				cout << "1.Праворуч" << endl;
				cout << "2.Лiворуч" << endl;
				cin >> s;
				if (s == 1) {
					cout << "Введiть на скiльки градусiв ви бажаєте повернути фiгуру:";
					cin >> q;
					cout << "Ви повернули фiгуру на " << endl;
					cout << q;
					cout << "градусiв праворуч! " << endl;
				}
				if (s == 2) {
					cout << "Введiть на скiльки градусiв ви бажаєте повернути фiгуру:";
					cin >> q;
					cout << "Ви повернули фiгуру на " << endl;
					cout << q;
					cout << "градусiв лiворуч! " << endl;
				}
			}
			if (a == 3) {
				cout << "Задайте новi розмiри фiгури: ";
				cout << "Введiть нову ширину квадрата: ";
				cin >> w;
				cout << "Введiть нову довжину квадрата: ";
				cin >> p;
				cout << "Ширина нового квадрату: ";
				cout<< w;
				cout << "Довжина нового квадрату: ";
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
		cout << "Задайте ширину прямокутника: ";
		cin >> f;
		cout << "Задайте довжину прямокутника: ";
		cin >> g;
		cout << "Ви створили прямокутник шириною ";
		cout << f;
		cout << "cм i довжиною ";
		cout << g;
		cout << "см!" << endl;
		cout << "-------------------------------------------" << endl;
		cout << "Як ви бажаєте змiнити фiгуру:" << endl;
		cout << "1.Перемiстити" << endl;
		cout << "2.Повернути" << endl;
		cout << "3.Розмiр" << endl;
		cin >> a;
		if (a == 1) {
			cout << "Введiть на скiльки сантиметрiв ви бажаєте перемiстити фiгуру:" << endl;
			cout << "Вправо: ";
			cin >> b;
			cout << "Лiворуч: ";
			cin >> c;
			cout << "Догори: ";
			cin >> d;
			cout << "Донизу: ";
			cin >> e;
			cout << "Ви перенесли вашу фiгуру на: " << endl;
			cout << b;
			cout << "см праворуч; "<<endl;
			cout << c;
			cout << "см лiворуч; "<<endl;
			cout << d;
			cout << "см вниз; "<<endl;
			cout << e;
			cout << "см вверх. ";

		}
		if (a == 2) {
			cout << "В який бiк повернути фiгуру: "<<endl;
			cout << "1.Праворуч" << endl;
			cout << "2.Лiворуч" << endl;
			cin >> s;
			if (s == 1) {
				cout << "Введiть на скiльки градусiв ви бажаєте повернути фiгуру:";
				cin >> q;
				cout << "Ви повернули фiгуру на " << endl;
				cout << q;
				cout << "градусiв праворуч! " << endl;
			}
			if (s == 2) {
				cout << "Введiть на скiльки градусiв ви бажаєте повернути фiгуру:" ;
				cin >> q;
				cout << "Ви повернули фiгуру на " << endl;
				cout << q;
				cout << "градусiв лiворуч! " << endl;
			}
		}
		if (a == 3) {
			cout << "Задайте новi розмiри фiгури: "<<endl;
			cout << "Введiть нову ширину прямокутника: ";
			cin >> w;
			cout << "Введiть нову довжину прямокутника: ";
			cin >> p;
			cout << "Ширина нового прямокутника: ";
			cout << w ;
			cout << "Довжина нового прямокутника: ";
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
	cout << "Виберiть фiгуру яку ви хочете створити: " << endl;
	cout << "1.Круг" << endl;
	cout << "2.Квадрат" << endl;
	cout << "3.Прямокутник " << endl;
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