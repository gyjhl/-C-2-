#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//1, ���캯���ķ��༰����
//����

//���ղ�������, �޲ι���(Ĭ�Ϲ���)���вι���
//�������ͷ���, ��ͨ���� �� ��������

class Person
{
public:
	//���캯��
	Person()
	{
		cout << "Person���޲ι��캯���ĵ���" << endl;
	}

	Person(int a)
	{
		age = a;
		cout << "Person���вι��캯���ĵ���" << endl;
	}
	Person(const Person &p) //ǰ��Ҫ��const, ����ʹ�����õķ�ʽ��������(&)
	{
		//������������ϵ���������, ������������
		age = p.age;
		cout << "Person�Ŀ������캯���ĵ���" << endl;
	}

	~Person()
	{
		cout << "Person�����������ĵ���" << endl;
	}

	int age;
};


//���ù������������
void test01()
{
	////1. ���ŷ�
	//Person p1;//����Ĭ�Ϲ��캯������
	////2, ��ʾ��
	//Person p2(10);//�����вι��캯��
	//Person p3(p2);//���ÿ������캯��


	////ע������
	////����Ĭ�Ϲ��캯��ʱ��, ��Ҫ��()
	////��Ϊ�������д���, ����������Ϊ��һ������������, ������Ϊ�ڴ�������
	////Person p1();

	//cout << "p2������Ϊ: " << p2.age << endl;
	//cout << "p3������Ϊ: " << p3.age << endl;

	Person p1;//����Ĭ�Ϲ��캯������
	Person p2 = Person(10);//�����вι��캯��
	Person p3 = Person(p2);//���ÿ������캯��


	//�ص�: ��ǰִ���н�����, ϵͳ���������յ���������
	//Person(10);//��������, �ŵ��Ⱥ��Ҳ��ʱ��, �����Ƕ��������

	//cout << "aaaaa" << endl;

	//ע������2
	//��Ҫ���ÿ������캯��, ����ʼ����������, ����������ΪPerson(p3) == Person p3;���������ض���
	Person(p3);

	//3, ��ʽת����
	Person p4 = 10;//�൱��д�� Person p4 = Person(10); �вι���
	Person p5 = p4;//�൱��д�� Person p4 = Person(p4); ��������
}

int main() {
	//�����ù��캯��, �ֵ�����������
	test01();
	//ֻ���ù��캯��, ��main����ִ�����֮��ŵ�����������
	//Person p;
	system("pause");
	return 0;
}
*/