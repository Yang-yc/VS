#include<iostream>
using namespace std;
#include<string>

class Person
{	
public:
	//设置姓名
	void setname(string name)
	{
		m_name = name;
	}
	//获取姓名  如果想修改（年龄的范围必须在0~150之间）
	string getame()
	{
		return m_name;
	}
	//设置年龄
	void setage(int age)
	{
		if (age > 150 || age < 0)
			return;
		m_age = age;
	}
	//获取年龄
	int getage()
	{
	//	m_age = 10;
		return m_age;
	}
	//设置情人
	void setlover(string lover)
	{
		m_lover = lover;
	}
private:
	
	//姓名  可读可写
	string m_name;
	//年龄  可读可写
	int m_age;
	//情人 只写
	string m_lover;
};

int main05()
{
	Person p;
	p.setname("张三");
	cout << "姓名为：" << p.getame() << endl;
	cout << "年龄为：" << p.getage() << endl;
	p.setlover("苍井");

	system("pause");
	return 0;
}	