#include<iostream>
#include<string>
using namespace std;
/*
//��ͨʵ��ҳ��
//�̳еĺô�: �����ظ�����
//�﷨: class ����: �̳з�ʽ ����
//���� Ҳ��Ϊ ������
//���� Ҳ��Ϊ ����


//Java����
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ, ������, ��½, ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "��������, ��������, վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Python����
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ, ������, ��½, ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "��������, ��������, վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++����
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ, ������, ��½, ע��...(����ͷ��)" << endl;
//	}
//	void footer()
//	{
//		cout << "��������, ��������, վ�ڵ�ͼ...(�����ײ�)" << endl;
//	}
//	void left()
//	{
//		cout << "Java, Python, C++...(���������б�)" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//


//�̳�ҳ��

//�̳еĺô�: �����ظ�����
//�﷨: class ����: �̳з�ʽ ����

class BasePage
{
public:
		void header()
	{
		cout << "��ҳ, ������, ��½, ע��...(����ͷ��)" << endl;
	}
	void footer()
	{
		cout << "��������, ��������, վ�ڵ�ͼ...(�����ײ�)" << endl;
	}
	void left()
	{
		cout << "Java, Python, C++...(���������б�)" << endl;
	}
};

//Javeҳ��
class Java :public BasePage
{
public:
	void content()
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};

//Pythonҳ��
class Python :public BasePage
{
public:
	void content()
	{
		cout << "Pythonѧ����Ƶ" << endl;
	}
};
//C++ҳ��
class CPP :public BasePage
{
public:
	void content()
	{
		cout << "CPPѧ����Ƶ" << endl;
	}
};
void test01() 
{
	cout << "Java������Ƶҳ������: " << endl;
	Java java;
	java.header();
	java.footer();
	java.left();
	java.content();


	cout << "--------------------------------------- " << endl;
	cout << "Python������Ƶҳ������: " << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();


	cout << "--------------------------------------- " << endl;
	cout << "C++������Ƶҳ������: " << endl;
	CPP cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();

}
int main()
{
	test01();

	system("pause");
	return 0;
}
*/