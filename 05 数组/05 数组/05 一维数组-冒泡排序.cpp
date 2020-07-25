#include<iostream>
using namespace std;

int main05()
{
	int arr[9] = { 2, 3, 8, 7, 5, 1, 4, 6, 9 };
	cout << "原始数组：" << endl;
	for (int i = 0; i < 9; i++)
		cout << arr[i] << " ";
	cout << endl;

	for (int i = 0; i < 9 ; i++)
		for (int j = 0; j < 9-i-1 ; j++)
			if (arr[j]>arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
	cout << "排序后数组：" << endl;
	for (int i = 0; i < 9; i++)
				cout << arr[i] << " "; 
	cout << endl;

	system("pause");
	return 0;

}