#include <iostream> 
#include <cmath> 
#include "foo.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	double x, y;
	int n;
	cout << "Введите первое число: ";
	cin >> x;
	cout << "Введите второе число: ";
	cin >> y;
	cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	cin >> n;
	foo(x, y, n);
}