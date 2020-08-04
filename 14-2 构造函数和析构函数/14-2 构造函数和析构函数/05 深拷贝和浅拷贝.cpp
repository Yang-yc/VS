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
//	Person(int age,int height)
//	{
//		cout << "有参函数调用" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//
//	Person(const Person &p)
//	{
//		cout << "拷贝构造函数调用" << endl;
//		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
//		m_age = p.m_age;
//		//m_height = p.m_height;//编译器默认实现就是这行代码
//		//深拷贝
//		m_height = new int(*p.m_height);
//	}
//	~Person()
//	{
//		//析构函数，将堆区开辟数据做释放操作
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "默认析构函数调用" << endl;
//	}
//	int m_age;
//	int *m_height;
//};
//
//void test01()
//{
//	Person p1(19,189);
//	cout << "p1的年龄：" << p1.m_age << "  p1的身高" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2的年龄：" << p2.m_age << "  p2的身高" << *p2.m_height << endl;
//}
//
//int main()
//{
//	test01();
//
//
//	system("pause");
//	return 0;
//}