#include<iostream>
#include<cstring>
using namespace std;
/*
//赋值运算符重载

//
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	Person& operator=(Person& p)
	{
		//编译器是提供的浅拷贝
		//m_age = p.m_Age

		//应该先判断是否有属性在堆区, 如果有, 先释放干净, 然后再深拷贝
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//深拷贝
		m_Age = new int(*p.m_Age);
		//返回对象本题
		return *this;
	}
	int* m_Age;
};
//重载 赋值运算符

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1;//赋值操作

	cout << "p1的年龄为: " << *p1.m_Age << endl;
	cout << "p2的年龄为: " << *p2.m_Age << endl;
	cout << "p3的年龄为: " << *p2.m_Age << endl;
}

int main() {

	test01();

	int a = 10;
	int b = 20;
	int c = 30;

	c = b = a;
	cout << "a= " << a << endl;
	cout << "b= " << a << endl;
	cout << "c= " << a << endl;

	system("pause");
	return 0;
}
*/
