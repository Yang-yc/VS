#include<iostream>
using namespace std;

int main02()
{
	int a = 10;

	//int &b;//错误，必须初始化

	int &b = a;
	int c = 20;

	b = c;//赋值操作，而不是更改引用

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	system("pause");
	return 0;
}