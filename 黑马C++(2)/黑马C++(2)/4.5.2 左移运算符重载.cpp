#include<iostream>
#include<cstring>
using namespace std;
/*
//左移运算符重载

class Person
{

	friend ostream& operator<<(ostream& cout, Person& p);

public:
	//只能用一个公共函数来设置class的成员变量
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
//类内成员最好设置为私有权限
private:
	//利用成员函数重载 左移运算符 p.operator<<(cout) 简化版本 p<< cout
	//不会利用成员函数重载<<运算符, 因为无法实现cout在左侧
	//void operator<<(cout){}
	int m_A;
	int m_B;

};

//只能利用全局函数重载左移运算符
ostream & operator<<(ostream &cout,Person &p) //本质operator<< (cout, p )简化 cout << p
{
	cout << "m_A = " << p.m_A << " m_B = " << p.m_B ;
	return cout;
}
void test01()
{
	Person p(10,10);
	//p.m_A = 10;
	//p.m_B = 10;
	
	//cout << p.m_A << endl;
	cout << p << " hello world "<< endl;
}


int main() {

	test01();

	system("pause");
	return 0;
}
*/