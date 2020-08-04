//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "有参函数调用" << endl;
//		m_age = age;
//	}
//
//	Person(const Person &p)
//	{
//		cout << "拷贝构造函数调用" << endl;
//		m_age = p.m_age;
//	}
//	~Person()
//	{
//		cout << "析构函数调用" << endl;
//	}
//	int m_age;
//};
//
//void test01()
//{
//	Person p;
//	p.m_age = 18;
//
//	Person p2(p);
//	cout << "p2的年龄：" << p2.m_age << endl;
//
//}
//
//int main()
//{
//	test01();
//	
//	system("pause");
//	return 0;
//}