#include<iostream>
using namespace std;

int func(int a, int b = 20, int c = 30)
{	
	return a + b + c;
}
//int func2(int a, int b = 10, int c = 30,int d)
//{
//	return a + b + c + d;
//}

//int func3(int a = 10, int b = 10);
//int func3(int a = 10, int b = 10)
//{
//	return a + b;
//}


int main01()
{
	cout << func(10,30) << endl;
//	cout << func3(10,30) << endl;

	system("pause");
	return 0;
}