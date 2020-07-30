#include<iostream>
using namespace std;


void text01()
{
	//创建10整型数据的数组，在堆区
	int * arr = new int[10];//10代表数组有10个元素
	for (int i=0; i < 10; i++)
	{
		arr[i] = i + 100;
	}
	for (int i=0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	//释放堆区的数组
	//释放数组的时候要加[]才可以
	delete[] arr;
}
int * text02()
{
	int * p = new int(10);
	return p;
}

int main()
{
	int * p = text02();

	cout << *p << endl;
	cout << *p << endl;
	//利用delete释放堆区数据
	delete p;
	//cout << *p << endl;//报错，释放的空间不可访问
	text01();
	system("pause");
	return 0;
}