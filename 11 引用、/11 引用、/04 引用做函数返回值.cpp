#include<iostream>
using namespace std;

int &test01()
{
	int a = 10;//�ֲ������������ջ��
	return a;
}

int &test02()
{
	static int a = 10;//��̬�����������ȫ����
	return a;
}

int main04()
{
	int &ref = test01();
	int &ref2 = test02();
	cout << "ref=" << ref << endl;//��һ�ν����ȷ������Ϊ���������˱���
	cout << "ref=" << ref << endl;//�ڶ��δ�����Ϊa���ڴ��Ѿ��ͷ�

	test02() = 1000;//��������ķ��������ã�����������ÿ�����Ϊ��ֵ
	cout << "ref2=" << ref2 << endl;	
	cout << "ref2=" << ref2 << endl;

	system("pause");

	return 0;
}