#include <iostream>

using namespace std;

void f1() {
  cout << "This is function numba one" << endl;
}

void f2() {
  cout << "This is function numba two" << endl;
}

void f3() {
  cout << "This is function numba three" << endl;
}

void f4(double a, double b) {
  cout << "This is function numba four" << endl;
  cout << "Function numba four can adding two numbers" << endl;
  cout << "The first is: " << a << endl;
  cout << "The second is: " << b << endl;
  cout << "The sum of this two numbers is: " << b + a << endl;
}

double f5(double a, double b) {
  cout << "This is function numba four" << endl;
  cout << "Function numba four can adding two numbers and return final value" << endl;
  cout << "The first is: " << a << endl;
  cout << "The second is: " << b << endl;
  cout << "The sum of this two numbers is: " << b + a << endl;
  return a + b;
}

int main() {
  void(*arrayOfFunctionPointersDamn[])() = { f1, f2, f3 };
  void(*arrayOfFunctionPointersWithParams[])(double, double) = { f4 };
  double(*arrayOfFunctionPointersWithParamsAndReturn[])(double, double) = { f5 };

  double result;

  arrayOfFunctionPointersDamn[0]();
  arrayOfFunctionPointersDamn[1]();
  arrayOfFunctionPointersDamn[2]();
  arrayOfFunctionPointersWithParams[0](2, 4);

  result = arrayOfFunctionPointersWithParamsAndReturn[0](2, 5);
  cout << result << endl;

  system("pause");
}