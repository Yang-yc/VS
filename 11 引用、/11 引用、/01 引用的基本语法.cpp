#include<iostream>
using namespace std;

int main01()
{
	//�������� &���� = ԭ��

	int a = 10;
	int &b = a;

	b = 100;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}