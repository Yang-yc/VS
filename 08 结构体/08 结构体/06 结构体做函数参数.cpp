#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

//ֵ����
void printfStu1(struct student s)
{
	cout << "�Ӻ����� ������" << s.name << endl;
	s.name = "����";
}

void printfStu2(struct student * p)
{
	cout << "�Ӻ����� ������" << p->name << endl;
	p->name = "����";

}

int main06()
{
	struct student s = { "����", 18, 80 };

	printfStu1(s);
	cout << "������ ������" << s.name << endl;

	printfStu2(&s);
	cout << "������ ������" << s.name << endl;

	system("pause");

	return 0;
}