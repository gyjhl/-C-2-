#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*

//二进制写文件

class Person
{
public:

	char m_Name[64]; //姓名
	int m_Age; //年龄
};
void test01()
{
	//1. 包含头文件fstream

	//2. 创建流对象
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3. 指定打开方式
	//ofs.open("person.txt", ios::out|ios::binary);

	//4. 写文件
	Person p = {"张三", 18};
	ofs.write((const char *)&p,sizeof(Person));
	
	//5. 关闭 
	ofs.close();
}

int main()
{
	test01();
	//test02();

	system("pause");
	return 0;

}
*/