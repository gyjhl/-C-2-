#include<iostream>
#include<cstring>
using namespace std;
/*
//��ֵ���������

//
class Person
{
public:
	Person(int age)
	{
		m_Age = new int(age);
	}

	~Person()
	{
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
	}
	Person& operator=(Person& p)
	{
		//���������ṩ��ǳ����
		//m_age = p.m_Age

		//Ӧ�����ж��Ƿ��������ڶ���, �����, ���ͷŸɾ�, Ȼ�������
		if (m_Age != NULL)
		{
			delete m_Age;
			m_Age = NULL;
		}
		//���
		m_Age = new int(*p.m_Age);
		//���ض�����
		return *this;
	}
	int* m_Age;
};
//���� ��ֵ�����

void test01()
{
	Person p1(18);

	Person p2(20);

	Person p3(30);

	p3 = p2 = p1;//��ֵ����

	cout << "p1������Ϊ: " << *p1.m_Age << endl;
	cout << "p2������Ϊ: " << *p2.m_Age << endl;
	cout << "p3������Ϊ: " << *p2.m_Age << endl;
}

int main() {

	test01();

	int a = 10;
	int b = 20;
	int c = 30;

	c = b = a;
	cout << "a= " << a << endl;
	cout << "b= " << a << endl;
	cout << "c= " << a << endl;

	system("pause");
	return 0;
}
*/
