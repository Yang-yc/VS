#include<iostream>
using namespace std;

class C1
{
	int m_a;//默认权限  私有
};

struct C2
{
	int m_a;//默认权限  公共
};

int main04()
{
	/*C1 c1;
	c1.m_a = 10;*/
	C2 c2;
	c2.m_a = 10;

	system("pause");
	return 0;
}