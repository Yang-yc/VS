#include<iostream>
using namespace std;
#include<ctime>

int main12()
{
	//�����������ӣ��������õ�ǰϵͳʱ���������������ֹÿ���������һ��
	srand((unsigned int)time(NULL));

	//1��ϵͳ���������

	int num = rand() % 100 + 1; //rand()%100  ����0~99�������
	//cout << num << endl;
	//2����ҽ��в²�
	int val = 0; //������������

	while (1)
	{
		cin >> val;

		//3���ж���ҵĲ²�

		//�´�  ��ʾ�µĽ�� ������߹�С ���·��صڶ���

		if (val > num)
			cout << "�²����" << endl;
		else if (val < num)
			cout << "�²��С" << endl;
		//�¶�  �˳���Ϸ
		else{
			cout << "�¶���" << endl;
			break;
		}
	}
	

	system("pause");

	return 0;
}