#pragma once
#include<iostream>
using namespace std;
#include"Point.h"

//Բ��
class Circle
{
public:
	//���ð뾶
	void setR(int r);

	//��ȡ�뾶
	int getR();

	//����Բ��
	void setCenter(Point Center);

	//��ȡԲ��
	Point getCenter();

private:
	int m_r;//�뾶
	//�����п�������һ�����������еĳ�Ա
	Point m_Center;//Բ��
};