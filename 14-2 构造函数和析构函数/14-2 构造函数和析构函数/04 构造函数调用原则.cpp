//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age)
//	{
//		cout << "�вκ�������" << endl;
//		m_age = age;
//	}
//
//	Person(const Person &p)
//	{
//		cout << "�������캯������" << endl;
//		m_age = p.m_age;
//	}
//	~Person()
//	{
//		cout << "������������" << endl;
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
//	cout << "p2�����䣺" << p2.m_age << endl;
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