#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*



class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的默认构造函数的调用" << endl;
	}
	Person(int age)
	{
		m_Age = age;
		cout << "Person的有参构造函数的调用" << endl;
	}
	Person(const Person &p)
	{
		m_Age = p.m_Age;
		cout << "Person的拷贝构造函数的调用" << endl;
	}
	//析构函数
	~Person()
	{
		cout << "Person的析构函数的调用" << endl;
	}

	int m_Age;
};

//拷贝构造函数的调用时机

//1, 使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄: " << p2.m_Age << endl;
}

//2, 值传递的方式给函数参数传值
void doWork(Person p)
{

}
void test02()
{
	Person p;
	doWork(p);

}
//3, 值的方式返回局部对象
Person doWork02()
{
	Person p1;
	cout << (int*)&p1 << endl;
	return p1;
}
void test03()
{
	Person p = doWork02();
	cout << (int*)&p << endl;
}

//调用构造和析构函数


int main() {
	//即调用构造函数, 又调用析构函数
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}
*/