#include <iostream>
using namespace std;

//常量的定义方式
//1.#define宏常量
//2.const修饰的变量

//1.#define宏常量
#define Day 7
int main()
	{
		cout << "一周总共有:" << Day << "天" << endl;

		const int month = 12;
		cout << "一年总共有:" << month << "月" << endl;

	cout << "Hello World" << endl;
	system("pause");
	return 0;
}