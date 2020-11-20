#include<iostream>
#include<string>
using namespace std;
/*
//继承中同名函数的处理

class Base
{
public:
	Base()
	{
		m_A = 100;
	}
	void func()
	{
		cout << "Base - func()调用" << endl;
	}
	void func(int a)
	{
		cout << "Base - func(int a)调用" << endl;
	}
	int m_A;
};

class Son :public Base
{
public:
	Son()
	{
		m_A = 200;
	}
	void func()
	{
		cout << "Son - func()调用" << endl;
	}
	int m_A;
};

void test01()
{
	Son s;
	cout << "Son 下 m_A = " << s.m_A << endl;
	//如果通过子类对象 访问到父类中同名成员, 需要加作用域
	cout << "Base 下 m_A = " << s.Base::m_A << endl;

	
}

void test02()
{
	Son s;
	s.func();//直接调用 调用的是子类中的同名成员
	//如何调用父类中同名成员函数?
	s.Base::func();

	//如果子类中出现和父类同名的成员函数, 子类的同名成员会隐藏父类中所有同名成员函数
	//如果想访问到父类中被隐藏的同名成员函数, 需要加作用域

	s.Base::func(100);
}
int main()
{
	//test01();
	test02();
	system("pause");
	return 0;
}
*/