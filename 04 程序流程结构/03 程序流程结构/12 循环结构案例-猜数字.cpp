#include<iostream>
using namespace std;
#include<ctime>

int main12()
{
	//添加随机数种子，作用利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	//1、系统生成随机数

	int num = rand() % 100 + 1; //rand()%100  生成0~99的随机数
	//cout << num << endl;
	//2、玩家进行猜测
	int val = 0; //玩家输入的数据

	while (1)
	{
		cin >> val;

		//3、判断玩家的猜测

		//猜错  提示猜的结果 过大或者过小 重新返回第二步

		if (val > num)
			cout << "猜测过大" << endl;
		else if (val < num)
			cout << "猜测过小" << endl;
		//猜对  退出游戏
		else{
			cout << "猜对了" << endl;
			break;
		}
	}
	

	system("pause");

	return 0;
}