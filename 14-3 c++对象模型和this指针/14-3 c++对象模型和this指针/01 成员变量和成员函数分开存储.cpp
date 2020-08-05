#include<iostream>
using namespace std;

class Person
{
	int m_a;//非静态的成员变量  属于类的对象上

	static int m_b;//静态成员变量  不属于类的对象上

	void func()//非静态成员函数  不属于类的对象上
	{
	}

	static void func2(){}//静态成员函数  不属于类的对象上
};

int Person::m_b = 10;

void test()
{
	Person p;

	//空对象占用内存空间为：1
	//c++编译器会给没给空对象也分配一个字节空间，是为了区分空对象占内存的位置
	//每个空对象也应该有一个独一无二的内存地址
	cout << "sizeof p=" << sizeof(p) << endl;
}

void test2()
{
	Person p;
	cout << "sizeof p=" << sizeof(p) << endl;
}

int main01()
{
	test2();

	system("pause");
	return 0;
}