#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//深拷贝与浅拷贝

class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的默认构造函数的调用" << endl;
	}
	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);//浅拷贝开辟一个指向堆区的指针
		cout << "Person的有参构造函数的调用" << endl;
	}

	//自己实现拷贝构造函数, 解决浅拷贝代买的问题
	Person(const Person &p)
	{
		
		cout << "Person的拷贝构造函数的调用" << endl;
		m_Age = p.m_Age;
		//m_Height = height; //编译器默认实现就是这行代码
		m_Height = new int(*p.m_Height);//再开辟一次堆区内存, 保证代码没有问题(这就是深拷贝)
	}


	//析构函数

	~Person()
	{
		//析构代码, 将堆区开辟的数据做释放操作
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person的析构函数的调用" << endl;
	}

	int m_Age;
	int * m_Height;
};


void test01()
{
	Person p1(18, 160);
	cout << "p1的年龄: " << p1.m_Age << endl;
	cout << "p1的身高: " << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2的年龄: " << p2.m_Age << endl;
	cout << "p2的身高: " << *p1.m_Height << endl;
}


int main() {
	//即调用构造函数, 又调用析构函数
	test01();

	system("pause");
	return 0;
}
*/