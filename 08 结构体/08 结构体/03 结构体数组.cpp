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
		{"张三",18,80},
		{"李四",19,60},
		{"王五",38,66}
	};

	arr[2].name = "赵四";
	arr[2].age = 80;
	arr[2].score = 60;
	for (int i = 0; i < 3; i++)
	{
		cout << "姓名：" << arr[i].name << "年龄：" << arr[i].age << "成绩：" << arr[i].score << endl;
	}

	system("pause");

	return 0;
}