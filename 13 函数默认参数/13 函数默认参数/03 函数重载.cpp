#include<iostream>
using namespace std;

//函数重载的满足条件
//同一个作用域下
//函数名称相同
//函数参数类型不同，或者个数不同，或者顺序不同

void func()
{
	cout << "func调用" << endl;
}

void func(int a)
{
	cout << "func(int a)的调用" << endl;
}

void func(double a)
{
	cout << "func(double a)的调用" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)的调用" << endl;
}
void func(double a,int b)
{
	cout << "func(double a,int b)的调用" << endl;
}


int main04()
{
	//func();
	//func(10);
	//func(2.14);
	func(10, 2.14);

	system("pause");
	return 0;
}