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
//	Person(int age,int height)
//	{
//		cout << "�вκ�������" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//
//	Person(const Person &p)
//	{
//		cout << "�������캯������" << endl;
//		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
//		m_age = p.m_age;
//		//m_height = p.m_height;//������Ĭ��ʵ�־������д���
//		//���
//		m_height = new int(*p.m_height);
//	}
//	~Person()
//	{
//		//���������������������������ͷŲ���
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Ĭ��������������" << endl;
//	}
//	int m_age;
//	int *m_height;
//};
//
//void test01()
//{
//	Person p1(19,189);
//	cout << "p1�����䣺" << p1.m_age << "  p1�����" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2�����䣺" << p2.m_age << "  p2�����" << *p2.m_height << endl;
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