#include<iostream>
#include<string>
using namespace std;

/*struct student
{
	string name;
	int age;
	int score;
};*/
struct student
{
	string name;
	int age;
	int score;
}s3;

int main01()
{
	struct student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 60;
	cout << "������" << s1.name << "���䣺" << s1.age << "������" << s1.score << endl;

	student s2 = { "����", 19, 70 };
	cout << "������" << s2.name << "���䣺" << s2.age << "������" << s2.score << endl;

	s3.name = "����";
	s3.age = 20;
	s3.score = 80;
	cout << "������" << s3.name << "���䣺" << s3.age << "������" << s3.score << endl;

	system("pause");
	return 0;
}