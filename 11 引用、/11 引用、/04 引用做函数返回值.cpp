#include<iostream>
using namespace std;

int &test01()
{
	int a = 10;//局部变量，存放在栈区
	return a;
}

int &test02()
{
	static int a = 10;//静态变量，存放在全局区
	return a;
}

int main04()
{
	int &ref = test01();
	int &ref2 = test02();
	cout << "ref=" << ref << endl;//第一次结果正确，是因为编译器做了保留
	cout << "ref=" << ref << endl;//第二次错误，因为a的内存已经释放

	test02() = 1000;//如果函数的返回是引用，这个函数调用可以作为左值
	cout << "ref2=" << ref2 << endl;	
	cout << "ref2=" << ref2 << endl;

	system("pause");

	return 0;
}