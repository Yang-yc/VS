//#include<iostream>
//using namespace std;
//#include<string>
//
//class Phone
//{
//public:
//	Phone(string pname)
//	{
//		cout << "Phone的构造函数调用" << endl;
//		m_pname = pname;
//	}
//	string m_pname;
//};
//
//class Person
//{
//public:
//	Person(string name, string pname) :m_name(name), m_phone(pname)//m_Phong=pname; 隐式转换法
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	string m_name;
//	Phone m_phone;
//
//};
//
//void test()
//{
//	Person p("张三", "苹果");
//	cout << p.m_name << "拿着" << p.m_phone.m_pname << endl;
//}
//
//
//int main()
//{
//	test();
//
//
//	system("pause");
//	return 0;
//}