#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*

//������д�ļ�

class Person
{
public:

	char m_Name[64]; //����
	int m_Age; //����
};
void test01()
{
	//1. ����ͷ�ļ�fstream

	//2. ����������
	ofstream ofs("person.txt", ios::out | ios::binary);

	//3. ָ���򿪷�ʽ
	//ofs.open("person.txt", ios::out|ios::binary);

	//4. д�ļ�
	Person p = {"����", 18};
	ofs.write((const char *)&p,sizeof(Person));
	
	//5. �ر� 
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