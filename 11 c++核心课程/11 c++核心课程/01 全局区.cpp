#include<iostream>
using namespace std;

//g 
//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a=10;
const int c_g_b=10;

int main01()
{
	//局部变量
	int a = 10;
	int b = 10;

	//打印地址
	cout << "局部变量a的地址：" << (int)&a << endl;
	cout << "局部变量b的地址：" << (int)&b << endl;

	cout << "全局变量a的地址：" << (int)&g_a << endl;
	cout << "全局变量b的地址：" << (int)&g_b << endl;

	//静态变量
	static int s_a = 10;
	static int s_b = 10;

	cout << "静态变量s_a的地址：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址：" << (int)&s_b << endl;

	cout << "字符串常量的地址：" << (int)&"hello world1" << endl;
	cout << "字符串常量的地址：" << (int)&"hello world2" << endl;

	cout << "全局常量a的地址：" << (int)&c_g_a << endl;
	cout << "全局常量b的地址：" << (int)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;

	cout << "局部常量a的地址：" << (int)&c_l_a << endl;
	cout << "局部常量b的地址：" << (int)&c_l_b << endl;

	system("pause");
	return 0;

}