#include<iostream>
using namespace std;
#include"Circle.h"
#include"Point.h"
////����
//class Point 
//{
//public:
//	//����x����
//	void setX(int x)
//	{
//		m_x = x;
//	}
//	//��ȡx
//	int getX()
//	{
//		return m_x;
//	}
//	//����y
//	void setY(int y)
//	{
//		m_y = y;
//	}
//	//��ȡy
//	int getY()
//	{
//		return m_y;
//	}
//private:
//	int m_x;
//	int m_y;
//};
//
////Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_r = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_r;
//	}
//	//����Բ��
//	void setCenter(Point Center)
//	{
//		m_Center = Center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_r;//�뾶
//	//�����п�������һ�����������еĳ�Ա
//	Point m_Center;//Բ��
//};

//�жϵ��Բ�Ĺ�ϵ
void IsInCircle(Circle &c, Point &p)
{
	//��������֮�����ƽ��
	int distance=
	(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//����뾶��ƽ��
	int Rdistance = c.getR() * c.getR();
	//�жϹ�ϵ
	if (distance == Rdistance)
		cout << "����Բ��" << endl;
	else if (distance > Rdistance)
		cout << "����Բ��" << endl;
	else cout << "����԰��" << endl;
}

int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	
	//������
	Point p;
	p.setX(10);
	p.setY(10);

	//�жϹ�ϵ
	IsInCircle(c, p);

	system("pause");
	return 0;
}
