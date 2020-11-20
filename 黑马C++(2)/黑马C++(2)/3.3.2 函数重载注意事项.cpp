#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//函数的重载注意事项
//1, 引用作为重载的条件
void func(int &a)// int &a = 10; 不合法的
{
	cout << "func(int &a)的调用" << endl;
}

//int和const int属于类型不同, 可以重载
void func(const int& a)// const int &a = 10; 合法的
{
	cout << "func(const int &a)的调用" << endl;
}



//2, 函数重载遇见默认参数
void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}

void func2(int a , int b=10)
{
	cout << "func2(int a , int b=10)的调用" << endl;
}
int main() {
	int a = 10;
	func(a);//调用的是没有加const的函数

	func(10);//调用的是加const的函数

	//func2(10);//当函数重载碰到默认参数的时候, 出现二义性, 报错, 尽量避免这种情况

	func2(10, 20);

	system("pause");
	return 0;
}
*/