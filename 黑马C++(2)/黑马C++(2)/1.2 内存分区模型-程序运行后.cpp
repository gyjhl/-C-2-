#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*
//程序运行后

//栈区
	//由编译器总动分配释放, 存放函数的参数值, 局部变量等
	//注意事项, 不要返回局部变量的地址, 栈区开辟的数据由编译器自动释放



//int * func(int b)//形参数据也会放在栈区
//{
//	b = 100;
//	int a = 10;//局部变量, 存放在栈区, 栈区的数据在函数执行完之后自动释放
//	return &a;//返回局部变量的地址
//}


//用new开辟堆区
int * func()
{
	//指针本身是局部变量, 放在栈区, 这里是指针是将指针保存的数据放在堆区
	int * p = new int(10); //利用指针接受一个用new创建的,存放在堆区的内存数据

	return p;
}



int main() {

	//利用指针接受func函数的返回值
	//int * p = func(1);

	//在堆区开辟数据
	int * p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	//cout << *p << endl; //第一次可以打印正确的数字, 是因为编译器做了保留
	//cout << *p << endl; //第二次这个数据就不再保留了, 所以显示的是乱码

	//在堆区开辟数据

	system("pause");
	return 0;
}

*/