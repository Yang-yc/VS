#include<iostream>
using namespace std;

int main4()
{
	//1���ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;
	
	//2���ַ��ͱ�����ռ�ڴ��С
	cout << sizeof(ch) << endl;

	//3���ַ��ͱ�����������
	//char ch2 = "b";  //�����ַ��ͱ���ʱ��Ҫ�õ�����
	//char ch2 = 'adf'; //�����ַ��ͱ���ʱ����������ֻ����һ���ַ���������ʾ���һ��
	//cout << ch2 << endl;

	//4���ַ��ͱ�����ӦASCII��
	cout << (int)ch << endl;

	system("pause");
	return 0;
}