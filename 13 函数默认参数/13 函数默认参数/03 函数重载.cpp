#include<iostream>
using namespace std;

//�������ص���������
//ͬһ����������
//����������ͬ
//�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ

void func()
{
	cout << "func����" << endl;
}

void func(int a)
{
	cout << "func(int a)�ĵ���" << endl;
}

void func(double a)
{
	cout << "func(double a)�ĵ���" << endl;
}
void func(int a,double b)
{
	cout << "func(int a,double b)�ĵ���" << endl;
}
void func(double a,int b)
{
	cout << "func(double a,int b)�ĵ���" << endl;
}


int main04()
{
	//func();
	//func(10);
	//func(2.14);
	func(10, 2.14);

	system("pause");
	return 0;
}