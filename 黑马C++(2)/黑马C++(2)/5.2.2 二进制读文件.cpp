#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/**/

//�����ƶ��ļ�

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
	ifstream ifs("person.txt", ios::in | ios::binary);

	//3. ָ���򿪷�ʽ
	//ifs.open("person.txt", ios::out|ios::binary);

	//�ж��ļ��Ƿ�򿪳ɹ�
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��!" << endl;
		return;
	}

	//4. ���ļ�
	Person p;

	ifs.read((char*)&p, sizeof(Person));
	cout << "���� :" << p.m_Name << " ����: " << p.m_Age << endl;

	//5. �ر� 
	ifs.close();
}

int main()
{
	test01();
	//test02();

	system("pause");
	return 0;

}
