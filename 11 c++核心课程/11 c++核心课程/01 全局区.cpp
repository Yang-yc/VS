#include<iostream>
using namespace std;

//g 
//ȫ�ֱ���
int g_a = 10;
int g_b = 10;

//ȫ�ֳ���
const int c_g_a=10;
const int c_g_b=10;

int main01()
{
	//�ֲ�����
	int a = 10;
	int b = 10;

	//��ӡ��ַ
	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;

	cout << "ȫ�ֱ���a�ĵ�ַ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���b�ĵ�ַ��" << (int)&g_b << endl;

	//��̬����
	static int s_a = 10;
	static int s_b = 10;

	cout << "��̬����s_a�ĵ�ַ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ��" << (int)&s_b << endl;

	cout << "�ַ��������ĵ�ַ��" << (int)&"hello world1" << endl;
	cout << "�ַ��������ĵ�ַ��" << (int)&"hello world2" << endl;

	cout << "ȫ�ֳ���a�ĵ�ַ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���b�ĵ�ַ��" << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "�ֲ�����a�ĵ�ַ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&c_l_b << endl;

	system("pause");
	return 0;

}