#include <iostream>
using namespace std;

int main02()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "整个数组占用内存空间:" << sizeof(arr) << endl;
	cout << "每个元素占用内存空间:" << sizeof(arr[0]) << endl;
	cout << "数组中的元素个数:" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "数组首地址：" << (int)arr << endl;
	cout << "数组中第一个元素地址：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址：" << (int)&arr[1] << endl;

	system("pause");

	return 0;
}