#include<iostream>
using namespace std;


void text01()
{
	//����10�������ݵ����飬�ڶ���
	int * arr = new int[10];//10����������10��Ԫ��
	for (int i=0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i=0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ���������
	//�ͷ������ʱ��Ҫ��[]�ſ���
	delete[] arr;
}
int * text02()
{
	int * p = new int(10);
	return p;
}

int main()
{
	int * p = text02();

	cout << *p << endl;
	cout << *p << endl;
	//����delete�ͷŶ�������
	delete p;
	//cout << *p << endl;//�����ͷŵĿռ䲻�ɷ���
	text01();
	system("pause");
	return 0;
}