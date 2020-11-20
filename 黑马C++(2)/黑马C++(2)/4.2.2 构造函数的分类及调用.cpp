#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//1, 构造函数的分类及调用
//分类

//按照参数分类, 无参构造(默认构造)和有参构造
//按照类型分类, 普通构造 和 拷贝构造

class Person
{
public:
	//构造函数
	Person()
	{
		cout << "Person的无参构造函数的调用" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person的有参构造函数的调用" << endl;
	}
	Person(const Person &p) //前面要加const, 并且使用引用的方式传入数据(&)
	{
		//将传入的人身上的所有属性, 拷贝到我身上
		age = p.age;
		cout << "Person的拷贝构造函数的调用" << endl;
	}

	~Person()
	{
		cout << "Person的析构函数的调用" << endl;
	}

	int age;
};


//调用构造和析构函数
void test01()
{
	////1. 括号法
	//Person p1;//调用默认构造函数调用
	////2, 显示法
	//Person p2(10);//调用有参构造函数
	//Person p3(p2);//调用拷贝构造函数


	////注意事项
	////调用默认构造函数时候, 不要加()
	////因为下面这行代码, 编译器会认为是一个函数的声明, 不会认为在创建对象
	////Person p1();

	//cout << "p2的年龄为: " << p2.age << endl;
	//cout << "p3的年龄为: " << p3.age << endl;

	Person p1;//调用默认构造函数调用
	Person p2 = Person(10);//调用有参构造函数
	Person p3 = Person(p2);//调用拷贝构造函数


	//特点: 当前执行行结束后, 系统会立即回收掉匿名对象
	//Person(10);//匿名对象, 放到等号右侧的时候, 左侧就是对象的名称

	//cout << "aaaaa" << endl;

	//注意事项2
	//不要利用拷贝构造函数, 来初始化匿名对象, 编译器会认为Person(p3) == Person p3;对象声明重定义
	Person(p3);

	//3, 隐式转换法
	Person p4 = 10;//相当于写了 Person p4 = Person(10); 有参构造
	Person p5 = p4;//相当于写了 Person p4 = Person(p4); 拷贝构造
}

int main() {
	//即调用构造函数, 又调用析构函数
	test01();
	//只调用构造函数, 在main函数执行完成之后才调用析构函数
	//Person p;
	system("pause");
	return 0;
}
*/