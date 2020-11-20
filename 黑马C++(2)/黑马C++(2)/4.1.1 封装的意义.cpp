#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*

//封装的意义
//将属性和行为作为一个整体, 表现生活中的事务
//将属性和行为加以权限控制

//设计一个学生类, 属性有姓名和学号, 可以给姓名和学号赋值, 可以显示学生的姓名和学号
class Student
{
	//访问权限, 公共权限
public:
	//**************类中的属性和行为, 我们统一称为"成员"***********************
	//**************属性也称为 "成员属性" 和 "成员变量"************************
	//**************类中的行为也称为 "成员函数" 和 "成员方法"******************

	//属性
	//姓名
	string m_Name;
	//学号
	int m_ID;

	//行为
	//显示姓名和学号
	void showStudent()
	{
		cout << "姓名: " << m_Name << " 学号: " << m_ID << endl;
	}
	//给姓名赋值
	void setName(string name)
	{
		m_Name = name;
	}
	//给学号赋值
	void setID(int id)
	{
		m_ID = id;
	}
};

const double PI = 3.14;
//设计一个圆类, 求圆的周长
//圆求周长的工时: 2 * PI * 半径
//class 代表设计一个类, 类后面紧跟着的就是类名称
class Circle
{
	//访问权限
	//公共权限
public:

	//属性
	int m_r;
	//行为
	//获取圆的周长
	double calculateZC()
	{
		return 2 * PI * m_r;
	}
};


int main() {

	//通过圆类, 创建具体的圆(对象)
	//实例化 (通过一个类 创建一个对象的过程)
	Circle cl;
	//给圆对象 的属性进行赋值
	cl.m_r = 10;
	//2 * PI * m_r = 62.8
	cout << "圆的周长为: " << cl.calculateZC() << endl;

	//创建一个具体学生
	//实例化对象
	Student s1;
	Student s2;
	s1.setName("张三");
	s1.setID(1);
	s1.showStudent();

	s2.m_Name = "李四";
	s2.m_ID = 2;
	s2.showStudent();
	system("pause");
	return 0;
}
*/
