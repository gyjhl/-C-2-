#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/**/

//二进制读文件

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
	ifstream ifs("person.txt", ios::in | ios::binary);

	//3. 指定打开方式
	//ifs.open("person.txt", ios::out|ios::binary);

	//判断文件是否打开成功
	if (!ifs.is_open())
	{
		cout << "文件打开失败!" << endl;
		return;
	}

	//4. 读文件
	Person p;

	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名 :" << p.m_Name << " 年龄: " << p.m_Age << endl;

	//5. 关闭 
	ifs.close();
}

int main()
{
	test01();
	//test02();

	system("pause");
	return 0;

}
