#include <iostream>
using namespace std;

int main01()
{
	int a = 100;
	int * p = &a;

	cout << &a << endl;
	cout << p << endl;
	cout << *p << endl;

	system("pause");
	return 0;
}