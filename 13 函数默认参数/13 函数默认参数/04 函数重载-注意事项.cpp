#include<iostream>
using namespace std;

void func(int &a)  //int &a=10,���Ϸ�
{
	cout << "func(int &a)�ĵ���" << endl;
}

void func(const int &a)  //const int &a=10,�Ϸ�
{
	cout << "func(const int &a)�ĵ���" << endl;
}

void func2(int a,int b=10) 
{
	cout << "func2(int a,int b=10)�ĵ���" << endl;
}

void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
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