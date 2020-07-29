#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct student
{
	string sName;
	int score;
};

struct teacher
{
	string tName;
	struct student sArray[5];
};

void allocateSpace(struct teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "teacher_";
		tArray[i].tName += nameSeed[i];
		//给学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			int random = rand() % 61 + 40;
			tArray[i].sArray[j].score = random;
		}
	}
}

void printfInfo(struct teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].tName << endl;
		for (int j = 0; j < len; j++)
		{
			cout << "\t学生姓名： " << tArray[i].sArray[j].sName << "考试分数：" << tArray[i].sArray[j].score << endl;
		}
	}

}

int main()
{
	srand((unsigned int)time(NULL));

	struct teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	//给老师学生赋值
	allocateSpace(tArray, len);

	//打印所有信息
	printfInfo(tArray, len);

	system("pause");

	return 0;
}