#include<iostream>
using namespace std;

const double PI = 3.14;

class  Circle
{
	//����Ȩ��
	//����Ȩ��
public:
	//����
	//�뾶
	int m_r;
	//��Ϊ
	//��ȡԲ���ܳ�
	double calculateZC()
	{	
		return 2 * PI * m_r;
	}
};


int main01()
{
	//ͨ��Բ�ഴ�������Բ������
	Circle cl;
	cl.m_r = 10;
	cout << "Բ���ܳ���" << cl.calculateZC() << endl;

	system("pause");
	return 0;

}