#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

int main04()
{
	student s = { "����", 18, 100 };
	student * p = &s;
	cout << "������" << p->name  << "���䣺" << p->age << "�ɼ���" << p->score << endl;

	system("pause");

	return 0;
}