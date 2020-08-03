#include<iostream>
using namespace std;
 
//立方体设计
//创建立方体类
//设计属性
//设计行为，获取立方体的面积和体积
//分别用全局函数和成员函数，判断两个立方体是否相等

class Cube
{
private:
	int m_L;//长
	int m_W;//宽
	int m_H;//高

public:
	//设置长
	void setL(int l)
	{
		m_L = l;
	}
	//获取长
	int getL()
	{	
		return m_L;
	}
	//设置宽
	void setW(int w)
	{
		m_W = w;
	}
	//获取宽
	int getW()
	{
		return m_W;
	}
	//设置高
	void setH(int h)
	{
		m_H = h;
	}
	//获取高
	int getH()
	{
		return m_H;
	}
	//获取立方体面积
	int calculateS()
	{	
		return 2 * (m_L*m_W + m_L*m_H + m_W*m_H);
	}
	int calculateV()
	{
		return m_L*m_W*m_H;
	}

	//利用成员函数判断两个立方体是否相等
	bool isSameByclass(Cube &c)
	{
		if ((m_H == c.getH()) && (m_L == c.getL()) && (m_W == c.getW()))
			return true;
		else false;
	}

};

//利用全局函数判断两个立方体是否相等
bool isSame(Cube &c1, Cube &c2)
{
	if ((c1.getH() == c2.getH()) && (c1.getL() == c2.getL()) && (c1.getW() == c2.getW()))
		return true;
	else false;
}

int main06()
{
	//创建立方体
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	cout << "c1的面积：" << c1.calculateS() << endl;
	cout << "c1的体积：" << c1.calculateV() << endl;

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	bool ret = isSame(c1, c2);
	if (ret)
	{
		cout << "相等" << endl;
	}
	else
		cout << "不相等" << endl;

	ret = c1.isSameByclass(c2);
	if (ret)
	{
		cout << "相等" << endl;
	}
	else
		cout << "不相等" << endl; 
	system("pause");
	return 0;
}