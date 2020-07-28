#include <iostream>
using namespace std;

int main06()
{
	int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int * p = arr;

	for (int i = 0; i < 9; i++)
	{
		cout << *p << endl;
		p++;
	}

	system("pause");
	return 0;
}