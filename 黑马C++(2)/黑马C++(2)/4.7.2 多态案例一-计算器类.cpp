#include<iostream>
#include<cstring>
using namespace std;

/*

//多态案例, 计算器类

//多态的优点
//1. 代码组织结构清晰
//2. 可读性强
//3. 利于前期和后期的维护

//利用普通的写法和多态技术实现计算器

//普通写法
class Calculator
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}
		//如果想扩展新的功能, 需要修改源码
		//在真实的开发中, 提倡开闭原则
		//开闭原则: 对扩展进行开发, 对修改进行关闭
	}
	int m_Num1; //操作数1
	int m_Num2; //操作数2
};

void test01()
{
	//创建计算器对象
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
}

//利用多态实现计算器
//多态带来的好处
//1. 代码组织结构清晰
//2. 可读性强
//3. 利于前期和后期的维护
//实现计算器抽象类
class AbstractCalculator
{
public:

	virtual int getResult()
	{
		return 0;
	}
	int m_Num1;
	int m_Num2;
};

//加法计算器类
class AddCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};

//减法计算器类
class SubCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

//乘法计算器类
class MulCalculator :public AbstractCalculator
{
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void test02()
{
	//多态的使用条件
	//父类指针或者引用指向子类对象
	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//用完后记得销毁
	delete abc;

	//减法运算
	abc = new SubCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//用完后记得销毁
	delete abc;

	//乘法法运算
	abc = new MulCalculator;
	abc->m_Num1 = 100;
	abc->m_Num2 = 100;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//用完后记得销毁
	delete abc;

}

int main()
{

	//test01();
	test02();

	system("pause");
	return 0;
}
*/