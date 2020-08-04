#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	static void func()
	{
		m_a = 100;//静态成员函数可以访问静态成员变量
		//m_b = 200;//静态成员函数不可以访问非静态成员变量，无法区分到底是那个对象的m_b属性
		cout << "static void func调用" << endl;
	}
	static int m_a;//静态成员变量
	int m_b;//非静态成员变量

private://静态成员函数也是有访问权限的
	static void func2()
	{
		cout << "static void func2调用" << endl;
	}
};

int Person::m_a = 10;

void test()
{
	//1、通过对象访问
	Person p;
	p.func();
	//2、通过类名访问
	Person::func();

	//Person::func2(); 类外访问不到私有的静态成员函数
}

int main()
{
	test();
	
	system("pause");
	return 0;
}