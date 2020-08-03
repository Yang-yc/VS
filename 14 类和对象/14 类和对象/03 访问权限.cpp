#include<iostream>
using namespace std;

class Person
{	
public:
	//公共权限
	string m_name;//姓名
protected:
	//保护权限
	string m_car;//汽车
private:
	//私有权限
	int m_password;//银行卡密码

public:
	void func()
	{
		m_name = "张三";
		m_car = "拖拉机";
		m_password = 123456;
	}
};

int main03()
{
	//实例化具体对象
	Person p1;
	p1.m_name = "张三";
	//p1.m_car = "奔驰";//保护权限在类外访问不到
	//p1.password = "123";//私有权限在类外访问不到

	system("pause");
	return 0;
}