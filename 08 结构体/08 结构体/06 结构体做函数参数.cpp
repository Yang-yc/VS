#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

//值传递
void printfStu1(struct student s)
{
	cout << "子函数中 姓名：" << s.name << endl;
	s.name = "李四";
}

void printfStu2(struct student * p)
{
	cout << "子函数中 姓名：" << p->name << endl;
	p->name = "李四";

}

int main06()
{
	struct student s = { "张三", 18, 80 };

	printfStu1(s);
	cout << "函数中 姓名：" << s.name << endl;

	printfStu2(&s);
	cout << "函数中 姓名：" << s.name << endl;

	system("pause");

	return 0;
}