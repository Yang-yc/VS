#include<iostream>
using namespace std;
#include<string>

struct student
{
	string name;
	int age;
	int score;
};
int main03()
{
	struct student arr[3] = 
	{
		{"����",18,80},
		{"����",19,60},
		{"����",38,66}
	};

	arr[2].name = "����";
	arr[2].age = 80;
	arr[2].score = 60;
	for (int i = 0; i < 3; i++)
	{
		cout << "������" << arr[i].name << "���䣺" << arr[i].age << "�ɼ���" << arr[i].score << endl;
	}

	system("pause");

	return 0;
}