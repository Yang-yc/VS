#include<iostream>
using namespace std;

class Person
{	
public:
	//����Ȩ��
	string m_name;//����
protected:
	//����Ȩ��
	string m_car;//����
private:
	//˽��Ȩ��
	int m_password;//���п�����

public:
	void func()
	{
		m_name = "����";
		m_car = "������";
		m_password = 123456;
	}
};

int main03()
{
	//ʵ�����������
	Person p1;
	p1.m_name = "����";
	//p1.m_car = "����";//����Ȩ����������ʲ���
	//p1.password = "123";//˽��Ȩ����������ʲ���

	system("pause");
	return 0;
}