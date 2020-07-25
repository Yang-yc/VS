#include<iostream>
using namespace std;

int main04()
{
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	cout << "逆置前数组：" << endl;
	for (int i = 0; i < 9; i++)
		cout  << arr[i];
	cout << endl;

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	for (; start < end; start++, end--)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
	}

	cout << "逆置后数组：" << endl;
	for (int i = 0; i < 9; i++)
		cout << arr[i];
	cout << endl;

	system("pause");

	return 0;

}
