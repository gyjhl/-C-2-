#include<iostream>
#include<cstring>
using namespace std;

/*

//多态

//动物类
class Animal
{
public:
	//虚函数
	//vfptr = virtual function pointer = 虚函数指针
	//虚函数指针指向 -- vftable = virtual function table = 虚函数表
	//vftable表内记录虚函数地址
	//&Animal::speak() (取值符号+Animal作用域下的speak函数(Animal成员函数))
	virtual void speak()
	{
		cout << "动物在说话" << endl;
	}
};

//猫类
class Cat :public Animal
{
public:

	//函数重写的概念 : 函数返回值, 函数名, 参数列表, 完全相同, 叫函数重写
	//当子类重写了父类的虚函数, 子类中的虚函数表,内部,会替换成,子类的虚函数地址
	//&Cat::speak() 覆盖掉了.父类的虚函数, 但是父类的虚函数指针没有发生变化
	//当父类的指针或引用指向子类对象时候, 发生多态
	void speak()
	{
		cout << "小猫在说话" << endl;
	}
};

//狗类
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在说话" << endl;
	}
};



//执行说话的函数
//地址早绑定, 在编译阶段确定函数地址
//如果想执行让猫说话, 那么这个函数地址就不能提前绑定, 需要在运行阶段进行绑定, 地址晚绑定

//动态多态满足条件
//1, 有继承关系
//2, 子类要重写父类的虚函数

//动态多态使用
//父类的指针或者引用, 指向子类对象

void doSpeak(Animal& animal)  //Animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);

}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main()
{

	//test01();
	test02();

	system("pause");
	return 0;
}
*/