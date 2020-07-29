#include<iostream>
#include<string>
using namespace std;

struct Hero
{
	string name;
	int age;
	string sex;
};

//ð������ʵ��������������
void bullbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}

void printfHero(struct Hero heroArray[], int len)
{
	cout << "���������" << endl;

	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�:" << heroArray[i].sex << endl;
	}
}

int main08()
{
	struct Hero heroArray[5]=
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};

	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "ԭ����" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << " ���䣺" << heroArray[i].age << " �Ա�:" << heroArray[i].sex << endl;
	}

	bullbleSort(heroArray, len);

	printfHero(heroArray, len);
	system("pause");

	return 0;
}