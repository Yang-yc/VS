#include <iostream>
using namespace std;

int main02()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "��������ռ���ڴ�ռ�:" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ�ռ�:" << sizeof(arr[0]) << endl;
	cout << "�����е�Ԫ�ظ���:" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "�����׵�ַ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַ��" << (int)&arr[1] << endl;

	system("pause");

	return 0;
}