#include<iostream>
using namespace std;

int main4()
{
	//1、字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;
	
	//2、字符型变量所占内存大小
	cout << sizeof(ch) << endl;

	//3、字符型变量常见错误
	//char ch2 = "b";  //创建字符型变量时，要用单引号
	//char ch2 = 'adf'; //创建字符型变量时，单引号内只能有一个字符，否则显示最后一个
	//cout << ch2 << endl;

	//4、字符型变量对应ASCII码
	cout << (int)ch << endl;

	system("pause");
	return 0;
}