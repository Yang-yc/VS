#include<iostream>
using namespace std;
#include"Circle.h"
#include"Point.h"
////点类
//class Point 
//{
//public:
//	//设置x坐标
//	void setX(int x)
//	{
//		m_x = x;
//	}
//	//获取x
//	int getX()
//	{
//		return m_x;
//	}
//	//设置y
//	void setY(int y)
//	{
//		m_y = y;
//	}
//	//获取y
//	int getY()
//	{
//		return m_y;
//	}
//private:
//	int m_x;
//	int m_y;
//};
//
////圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_r = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_r;
//	}
//	//设置圆心
//	void setCenter(Point Center)
//	{
//		m_Center = Center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_r;//半径
//	//在类中可以让另一个类做本类中的成员
//	Point m_Center;//圆心
//};

//判断电和圆的关系
void IsInCircle(Circle &c, Point &p)
{
	//计算两点之间距离平方
	int distance=
	(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//计算半径的平方
	int Rdistance = c.getR() * c.getR();
	//判断关系
	if (distance == Rdistance)
		cout << "点在圆上" << endl;
	else if (distance > Rdistance)
		cout << "点在圆外" << endl;
	else cout << "点在园内" << endl;
}

int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	
	//创建点
	Point p;
	p.setX(10);
	p.setY(10);

	//判断关系
	IsInCircle(c, p);

	system("pause");
	return 0;
}
