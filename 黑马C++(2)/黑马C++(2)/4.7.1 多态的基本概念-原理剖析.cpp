#include<iostream>
#include<cstring>
using namespace std;

/*

//��̬

//������
class Animal
{
public:
	//�麯��
	//vfptr = virtual function pointer = �麯��ָ��
	//�麯��ָ��ָ�� -- vftable = virtual function table = �麯����
	//vftable���ڼ�¼�麯����ַ
	//&Animal::speak() (ȡֵ����+Animal�������µ�speak����(Animal��Ա����))
	virtual void speak()
	{
		cout << "������˵��" << endl;
	}
};

//è��
class Cat :public Animal
{
public:

	//������д�ĸ��� : ��������ֵ, ������, �����б�, ��ȫ��ͬ, �к�����д
	//��������д�˸�����麯��, �����е��麯����,�ڲ�,���滻��,������麯����ַ
	//&Cat::speak() ���ǵ���.������麯��, ���Ǹ�����麯��ָ��û�з����仯
	//�������ָ�������ָ���������ʱ��, ������̬
	void speak()
	{
		cout << "Сè��˵��" << endl;
	}
};

//����
class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����˵��" << endl;
	}
};



//ִ��˵���ĺ���
//��ַ���, �ڱ���׶�ȷ��������ַ
//�����ִ����è˵��, ��ô���������ַ�Ͳ�����ǰ��, ��Ҫ�����н׶ν��а�, ��ַ���

//��̬��̬��������
//1, �м̳й�ϵ
//2, ����Ҫ��д������麯��

//��̬��̬ʹ��
//�����ָ���������, ָ���������

void doSpeak(Animal& animal)  //Animal & animal = cat;
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);

}

void test02()
{
	cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main()
{

	//test01();
	test02();

	system("pause");
	return 0;
}
*/