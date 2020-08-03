#include<iostream>
using namespace std;
#include<string>
class Student
{
public:
	void setname(string name)
	{
		m_name = name;
	}
	void setID(int id)
	{	
		m_id = id;
	}

	void showStudent()
	{
		cout << "name:" << m_name << "ID:" << m_id << endl;
	}

	string m_name;
	int m_id;
};

int main02()
{	
	Student stu;
	stu.setname("µÂÂêÎ÷ÑÇ");
	stu.setID(250);
	stu.showStudent();

	system("pause");
	return 0;
}