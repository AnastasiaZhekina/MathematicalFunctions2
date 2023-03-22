#include "foo.h"
#include <iostream> 
#include <cmath> 
using namespace std;

void foo(double x, double y, int n) {
	switch (n) {
	case 1:
		cout << x << " + " << y << " = " << x + y;
		break;
	case 2:
		cout << x << " - " << y << " = " << x - y;
		break;
	case 3:
		cout << x << " - " << y << " = " << x * y;
		break;
	case 4:
		cout << x << " / " << y << " = " << x / y;
		break;
	case 5:
		cout << x << " в степени " << y << " = " << pow(x, y);
		break;
	default:
		cout << "Неверное значение";
	}
}