#include<iostream>
using namespace std;
#include<string>

class Person
{	
public:
	//��������
	void setname(string name)
	{
		m_name = name;
	}
	//��ȡ����  ������޸ģ�����ķ�Χ������0~150֮�䣩
	string getame()
	{
		return m_name;
	}
	//��������
	void setage(int age)
	{
		if (age > 150 || age < 0)
			return;
		m_age = age;
	}
	//��ȡ����
	int getage()
	{
	//	m_age = 10;
		return m_age;
	}
	//��������
	void setlover(string lover)
	{
		m_lover = lover;
	}
private:
	
	//����  �ɶ���д
	string m_name;
	//����  �ɶ���д
	int m_age;
	//���� ֻд
	string m_lover;
};

int main05()
{
	Person p;
	p.setname("����");
	cout << "����Ϊ��" << p.getame() << endl;
	cout << "����Ϊ��" << p.getage() << endl;
	p.setlover("�Ծ�");

	system("pause");
	return 0;
}	