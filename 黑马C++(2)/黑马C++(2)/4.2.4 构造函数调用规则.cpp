#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//构造函数调用规则
//1, 创建一个类, C++编译器会给每个类都添加至少3个函数
//默认构造 (空实现)
//析构函数 (空实现)
//拷贝构造 (值拷贝)

class Person
{
public:
	//构造函数
	//Person()
	//{
	//	cout << "Person的默认构造函数的调用" << endl;
	//}
	Person(int age)
	{
		m_Age = age;
		cout << "Person的有参构造函数的调用" << endl;
	}
	//Person(const Person& p)
	//{
	//	m_Age = p.m_Age;
	//	cout << "Person的拷贝构造函数的调用" << endl;
	//}
	//析构函数
	~Person()
	{
		cout << "Person的析构函数的调用" << endl;
	}

	int m_Age;
};


//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "p2的年龄: " << p2.m_Age << endl;
//}

void test02()
{
	Person p(28);
	Person p2(p);
	cout << "p2的年龄: " << p2.m_Age << endl;
}

int main() {
	//即调用构造函数, 又调用析构函数
	//test01();
	test02();
	system("pause");
	return 0;
}
*/