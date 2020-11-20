#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*

//读文件

void test01()
{
	//1. 包含头文件fstream

	//2. 创建流对象
	ifstream ifs;

	//3. 指定打开方式
	ifs.open("test.txt", ios::in);

	//判断文件打开是否成功, 前面加!是取反的意思
	if (!ifs.is_open())
	{
		cout << "文件打开失败!" << endl;
		return;
	}

	//4. 读内容

	//第一种
	//将数据读取到字符数组
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//第二种
	//char buf[1024] = { 0 };
	////getline(读取地址char*, 地址大小)
	//while (ifs.getline(buf, size(buf)))
	//{
	//	cout << buf << endl;
	//}

	//第三种
	string buf;

	while(getline(ifs,buf))
	{
		cout << buf << endl;
	}

	//第四种, 不太建议, 是一个一个字符读取文件
	char c;

	while ((c=ifs.get()) != EOF)
	{
		cout << c << endl;
	}

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
*/