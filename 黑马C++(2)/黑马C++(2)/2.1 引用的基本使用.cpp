#include<iostream>
#include<cstring>
#include<ctime>
using namespace std;


int main() {

	//���û����﷨
	//�������� &���� = ԭ��
	int a = 10;
	//��������
	int& b = a;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}