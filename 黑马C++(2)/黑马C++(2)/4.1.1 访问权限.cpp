#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//访问权限, 三种
//1, 公共权限 pubilc     成员: 类内可以访问, 类外也可以访问
//2, 保护权限 protected  成员: 类似可以访问, 类外不可以访问(子类可以访问父类中保护的内容)
//3, 私有权限 private    成员: 类似可以访问, 类外不可以访问(子类不可以访问父类中私有的内容)

class Person
{
public:
	//公共权限
	string m_Name;
protected:
	string m_Car;
private:
	int m_Password;

//成员函数, 也是有权限区分的
public:
	void func()
	{
		m_Name = "张三";
		m_Car = "拖拉机";
		m_Password = 123456;
	}
};

int main() {
	//实例化具体对象
	Person p1;
	p1.m_Name = "李四";
	//p1.m_Car = "奔驰"//保护权限的内容在类外访问不到
	//p1.m_Password = 123;//私有权限的内容在类外访问不到
	system("pause");
	return 0;
}
*/