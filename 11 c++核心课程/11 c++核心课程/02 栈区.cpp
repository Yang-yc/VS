#include<iostream>
using namespace std;

int * func(int b)//形参数据也会放在栈区
{
	b = 100;
	int a = 10;//局部变量，存放在栈区，栈区的数据在函数执行完后会自动释放
	return &a;//返回局部变量的地址

}

int main02()
{
	//接受func函数的返回值
	int * p = func(1);

	cout << *p << endl;//第一次可以正确打印，是因为编译器做了保留
	cout << *p << endl;//第二次这个数据就不再保留

	system("pause");
	return 0;
}