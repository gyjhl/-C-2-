#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//空指针调用成员函数

class Person
{
public:

	void showClassName()
	{
		cout << "this is a Person class" << endl;
	}

	void showPersonAge()
	{
		//报错的原因是因为传入的指针是为NULL
		//用if防止传入空指针, 防止程序崩溃, 增加代码健壮性
		if (this == NULL)
		{
			return;
		}
		cout << "age = "<< this->m_Age << endl;
	}
	int m_Age;
};

void test01()
{
	Person* p = NULL;
	p->showClassName();
	//p->showPersonAge();
}
int main() {

	test01();

	system("pause");
	return 0;
}
*/