#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};

struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;
};

int main05()
{
	teacher t;
	t.stu.name = "ÕÅÈı";

	cout << "ĞÕÃû£º" << t.stu .name << endl;

	system("pause");

	return 0;
}