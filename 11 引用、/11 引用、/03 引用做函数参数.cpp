#include<iostream>
using namespace std;


//值传递
void mySwap1(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "mySwap01 a=" << a << endl;
	cout << "mySwap01 b=" << b << endl;

}

//地址传递
void mySwap2(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

//引用传递
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