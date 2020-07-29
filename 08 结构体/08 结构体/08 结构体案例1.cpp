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
		//��ѧ����ֵ
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
		cout << "��ʦ������" << tArray[i].tName << endl;
		for (int j = 0; j < len; j++)
		{
			cout << "\tѧ�������� " << tArray[i].sArray[j].sName << "���Է�����" << tArray[i].sArray[j].score << endl;
		}
	}

}

int main()
{
	srand((unsigned int)time(NULL));

	struct teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	//����ʦѧ����ֵ
	allocateSpace(tArray, len);

	//��ӡ������Ϣ
	printfInfo(tArray, len);

	system("pause");

	return 0;
}