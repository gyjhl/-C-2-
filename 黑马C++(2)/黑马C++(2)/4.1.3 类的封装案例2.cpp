#include<iostream>
#include<cstring>
#include<ctime>

#include "circle.h"
#include "point.h"

using namespace std;
/*


//案例, 点和圆的关系

////点类
//class Point
//{
//public:
//	//设置X
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取X
//	int getX()
//	{
//		return m_X;
//	}
//	//设置Y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取Y
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};
//圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//		
//	}
//private:
//	int m_R; //半径
//	//在类中, 可以让另一个类作为本来中的成员
//	Point m_Center;
//};

//判断点和圆的关系
void isInCircle(Circle& c, Point& p)
{
	//计算两点之间距离 平方
	int distance = 
	(c.getCenter().getX() - p.getX())* (c.getCenter().getX() - p.getX()) +
	(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	//计算半径的平方
	int rDistance = c.getR() * c.getR();

	//判断关系
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if(distance > rDistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}
int main() {
	//创建一个圆
	Circle c;
	c.setR(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);
	//创建一个点
	Point p;
	p.setX(10);
	p.setY(9);

	//判断关系
	isInCircle(c, p);

	system("pause");
	return 0;
}
*/