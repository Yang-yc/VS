#include<iostream>
using namespace std;
#include<string>

class Person
{
public:
	static void func()
	{
		m_a = 100;//��̬��Ա�������Է��ʾ�̬��Ա����
		//m_b = 200;//��̬��Ա���������Է��ʷǾ�̬��Ա�������޷����ֵ������Ǹ������m_b����
		cout << "static void func����" << endl;
	}
	static int m_a;//��̬��Ա����
	int m_b;//�Ǿ�̬��Ա����

private://��̬��Ա����Ҳ���з���Ȩ�޵�
	static void func2()
	{
		cout << "static void func2����" << endl;
	}
};

int Person::m_a = 10;

void test()
{
	//1��ͨ���������
	Person p;
	p.func();
	//2��ͨ����������
	Person::func();

	//Person::func2(); ������ʲ���˽�еľ�̬��Ա����
}

int main()
{
	test();
	
	system("pause");
	return 0;
}