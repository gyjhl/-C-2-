#include<iostream>
#include<string>
#include<fstream>
using namespace std;

/*

//���ļ�

void test01()
{
	//1. ����ͷ�ļ�fstream

	//2. ����������
	ifstream ifs;

	//3. ָ���򿪷�ʽ
	ifs.open("test.txt", ios::in);

	//�ж��ļ����Ƿ�ɹ�, ǰ���!��ȡ������˼
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��!" << endl;
		return;
	}

	//4. ������

	//��һ��
	//�����ݶ�ȡ���ַ�����
	//char buf[1024] = { 0 };
	//while (ifs >> buf)
	//{
	//	cout << buf << endl;
	//}

	//�ڶ���
	//char buf[1024] = { 0 };
	////getline(��ȡ��ַchar*, ��ַ��С)
	//while (ifs.getline(buf, size(buf)))
	//{
	//	cout << buf << endl;
	//}

	//������
	string buf;

	while(getline(ifs,buf))
	{
		cout << buf << endl;
	}

	//������, ��̫����, ��һ��һ���ַ���ȡ�ļ�
	char c;

	while ((c=ifs.get()) != EOF)
	{
		cout << c << endl;
	}

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
*/