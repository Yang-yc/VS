#include <iostream>
using namespace std;

int main02()
{
	int a = 100;
	int * p = &a;
	cout << "sizeof(int *)=" << sizeof(int *) << endl;
	cout << "sizeof(float *)=" << sizeof(float *) << endl;

	system("pause");

	return 0;
}