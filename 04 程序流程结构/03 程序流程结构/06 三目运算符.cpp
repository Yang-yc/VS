#include<iostream>
using namespace std;

int main6()
{
	//��Ŀ�����
	//������������a,b,c
	int a = 10, b = 20, c = 0;

	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	//��C++����Ŀ��������ص��Ǳ��������Լ�����ֵ
	(a < b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}