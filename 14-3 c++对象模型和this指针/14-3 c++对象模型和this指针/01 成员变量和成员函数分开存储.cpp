#include<iostream>
using namespace std;

class Person
{
	int m_a;//�Ǿ�̬�ĳ�Ա����  ������Ķ�����

	static int m_b;//��̬��Ա����  ��������Ķ�����

	void func()//�Ǿ�̬��Ա����  ��������Ķ�����
	{
	}

	static void func2(){}//��̬��Ա����  ��������Ķ�����
};

int Person::m_b = 10;

void test()
{
	Person p;

	//�ն���ռ���ڴ�ռ�Ϊ��1
	//c++���������û���ն���Ҳ����һ���ֽڿռ䣬��Ϊ�����ֿն���ռ�ڴ��λ��
	//ÿ���ն���ҲӦ����һ����һ�޶����ڴ��ַ
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