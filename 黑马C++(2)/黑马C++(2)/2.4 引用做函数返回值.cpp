#include<iostream>
#include<ctime>
#include<string>

using namespace std;
/*
//�����������ķ���ֵ
//1, ���ò�Ҫ���ؾֲ�����������
int& test01()
{
	int a = 10; //����������е� ջ��
	return a;

}

//2, �����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
	static int a = 10; //��̬����, �����ȫ����, ȫ�����ϵ������ٳ��������ϵͳ�ͷ�
	return a;

}

int main() {

	//int& ref = test01();

	//cout << "ref = " << ref << endl;//��һ�ν����ȷ. ����Ϊ���������˱���
	//cout << "ref = " << ref << endl;//�ڶ��ν������. ����Ϊa���ڴ��Ѿ��ͷ�

	int& ref2 = test02();
	cout << "ref = " << ref2 << endl;
	cout << "ref = " << ref2 << endl;

	test02() = 1000;//��������ķ���ֵ������, ����������ÿ�����Ϊ��ֵ
	cout << "ref2 = " << ref2 << endl;//ref2 = 1000
	cout << "ref2 = " << ref2 << endl;//ref2 = 1000

	system("pause");
	return 0;

}
*/