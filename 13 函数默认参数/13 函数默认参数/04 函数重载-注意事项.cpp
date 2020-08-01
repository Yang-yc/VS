#include<iostream>
using namespace std;

void func(int &a)  //int &a=10,不合法
{
	cout << "func(int &a)的调用" << endl;
}

void func(const int &a)  //const int &a=10,合法
{
	cout << "func(const int &a)的调用" << endl;
}

void func2(int a,int b=10) 
{
	cout << "func2(int a,int b=10)的调用" << endl;
}

void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}

int main()
{
	//int a = 10;
	//func(a);
	//func(10);
	func2(10);

	system("pause");
	return 0;

}