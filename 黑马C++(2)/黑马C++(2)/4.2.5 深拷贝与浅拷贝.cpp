#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//�����ǳ����

class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person��Ĭ�Ϲ��캯���ĵ���" << endl;
	}
	Person(int age, int height)
	{
		m_Age = age;
		m_Height = new int(height);//ǳ��������һ��ָ�������ָ��
		cout << "Person���вι��캯���ĵ���" << endl;
	}

	//�Լ�ʵ�ֿ������캯��, ���ǳ�������������
	Person(const Person &p)
	{
		
		cout << "Person�Ŀ������캯���ĵ���" << endl;
		m_Age = p.m_Age;
		//m_Height = height; //������Ĭ��ʵ�־������д���
		m_Height = new int(*p.m_Height);//�ٿ���һ�ζ����ڴ�, ��֤����û������(��������)
	}


	//��������

	~Person()
	{
		//��������, ���������ٵ��������ͷŲ���
		if (m_Height != NULL)
		{
			delete m_Height;
			m_Height = NULL;
		}
		cout << "Person�����������ĵ���" << endl;
	}

	int m_Age;
	int * m_Height;
};


void test01()
{
	Person p1(18, 160);
	cout << "p1������: " << p1.m_Age << endl;
	cout << "p1�����: " << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2������: " << p2.m_Age << endl;
	cout << "p2�����: " << *p1.m_Height << endl;
}


int main() {
	//�����ù��캯��, �ֵ�����������
	test01();

	system("pause");
	return 0;
}
*/