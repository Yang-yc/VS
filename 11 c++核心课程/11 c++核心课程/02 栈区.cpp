#include<iostream>
using namespace std;

int * func(int b)//�β�����Ҳ�����ջ��
{
	b = 100;
	int a = 10;//�ֲ������������ջ����ջ���������ں���ִ�������Զ��ͷ�
	return &a;//���ؾֲ������ĵ�ַ

}

int main02()
{
	//����func�����ķ���ֵ
	int * p = func(1);

	cout << *p << endl;//��һ�ο�����ȷ��ӡ������Ϊ���������˱���
	cout << *p << endl;//�ڶ���������ݾͲ��ٱ���

	system("pause");
	return 0;
}