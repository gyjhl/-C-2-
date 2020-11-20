#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//成员属性设为私有化
//1, 可以自己控制读写的权限
//2, 对于写可以检测数据的有效性


//设计人类
class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
		
	//获取年龄, 只读的状态
	int getAge()
	{
		//m_Age = 0;//初始化为0岁
		return m_Age;
	}

	//设置年龄
	void setAge(int age)
	{
		if (age < 0 || age > 150)
		{
			m_Age = 0;
			cout << "您设置的年龄有误!" << endl;
			return;
		}
		m_Age = age;
	}
	//设置情人, 只写的权限
	void setLover(string lover)
	{
		m_Lover = lover;
	}

private:
	//姓名 可读可写
	string m_Name;
	//年龄 只读
	int m_Age;
	//情人 只写
	string m_Lover;
};

int main() {
	Person p;
	p.setName("张三");
	//设置情人为王五, 不可以访问
	p.setLover("王五");
	p.setAge(166);
	cout << "姓名为: " << p.getName() << endl;
	cout << "年龄为: " << p.getAge() << endl;

	system("pause");
	return 0;
}
*/