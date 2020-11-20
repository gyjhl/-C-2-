#include<iostream>
#include<string>
using namespace std;
/*
//继承中的对象模型

//利用开发人员命令提示工具, 用来查看对象的模型
//1, 先更换盘符F:
//2, 黏贴文件所在的文件夹地址, 前面加cd2个字母 cd C:\Users\YGUOA\source\repos\黑马C++(2)\黑马C++(2)\黑马C++(2)
//3, dir
//4, 查看内容, 注意打上类名称(Son)
//cl /d1 reportSingleClassLayoutSon "4.6.3 继承中的对象模型.cpp" (可以输入文件名开头, 按TAB键自动补全文件名)


class Base
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base
{
public:
	int m_D;
};

void test01()
{
	//父类中所有非静态成员属性都会被子类继承下去
	//父类中私有成员属性, 是被编译器隐藏了, 因此是访问不到, 但是确实继承下去了
	cout << "size of Son = " << sizeof(Son) << endl;
}
int main()
{
	test01();

	system("pause");
	return 0;
}
*/