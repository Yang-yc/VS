#include<iostream>
using namespace std;


//ֵ����
void mySwap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "mySwap01 a=" << a << endl;
	cout << "mySwap01 b=" << b << endl;

}

//��ַ����
void mySwap2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//���ô���
void mySwap3(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main03()
{
	int a = 10, b = 20;
	//mySwap1(a,b);
	//mySwap2(&a, &b);
	mySwap3(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");

	return 0;
}