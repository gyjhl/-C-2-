#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//静态成员函数

//所有的对象都共享同一个函数
//静态的成员函数只能访问静态的成员变量

class Person 
{
public:
	static void func()
	{
		m_A = 100;//静态成员函数可以访问静态的成员变量
		//m_B = 200;//静态成员函数不可以访问非静态的成员变量,无法区分到底是哪个对象的m_B的属性
		cout << "static void func调用" << endl;
	}

	static int m_A;
	int m_B;//非静态成员变量

	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2调用" << endl;
	}
};

int Person::m_A = 0;

//有两种访问方式
void test01()
{
	//1, 通过对象进行访问
	Person p;
	p.func();
	//2, 通过类名来进行访问
	Person::func();
	//Person::func2();//类外访问不到私有的静态成员函数
}
int main() {
	test01();

	system("pause");
	return 0;
}
*/