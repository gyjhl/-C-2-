
#include<iostream>
#include<cstring>
using namespace std;

/*

//�������ʹ�������

class Animal
{
public:
	Animal()
	{
		cout << "Animal���캯������" << endl;
	}
	//���麯��
	virtual void speak() = 0;

	////�������������, ����ָ���ͷ��������ʱ���ɾ�������
	//virtual ~Animal()
	//{
	//	cout << "Animal��������������" << endl;
	//}

	//��������
	//���ڴ�����������, ����Ҫ����, Ҳ��Ҫ����ʵ��
	//���˴�������֮��, �����Ҳ���ڳ�����, �޷�ʵ��������
	virtual ~Animal() = 0;

};

Animal::~Animal()
{
	cout << "Animal����������������" << endl;
}

class Cat : public Animal
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		//�����ڶ���
		m_Name = new string(name);
	}
	virtual void speak()
	{
		cout << *m_Name <<"Сè��˵��" << endl;
	}

	~Cat()
	{
		if (m_Name != NULL)
		{
			cout << "Cat������������" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}

	string* m_Name;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//����ָ��������ʱ��, ���������������������, ������������ж�������, �ͻ�����ڴ�й©
	delete animal;
}
int main()
{

	test01();
	//test02();

	system("pause");
	return 0;
}
*/