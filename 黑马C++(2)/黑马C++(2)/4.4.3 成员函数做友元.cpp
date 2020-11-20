#include<iostream>
#include<cstring>
#include<ctime>

using namespace std;
/*


//成员函数做友元

class Building;

class GoodGay
{
public:
	GoodGay();
	
	void visit(); //让visit可以访问Building中的私有成员
	void visit2(); //让visit2不可以访问Building中的私有成员

	Building* building;
};

class Building
{
	//告诉编译器, GoodGay类下的visit成员函数作为本类的好朋友, 可以访问私有成员
	friend void GoodGay::visit();
public:
	Building();
public:
	string m_SittingRoom; //客厅

private:
	string m_BedRoom;//我是
};

//类外实现成员函数
Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}
//让visit可以访问Building中的私有成员
void GoodGay::visit()
{
	cout << "visit函数正在访问: " << building->m_SittingRoom << endl;

	cout << "visit函数正在访问: " << building->m_BedRoom << endl;
}
//让visit2不可以访问Building中的私有成员
void GoodGay::visit2()
{
	cout << "visit2函数正在访问: " << building->m_SittingRoom << endl;
}
int main() {
	//test01();
	GoodGay gg;
	gg.visit();
	gg.visit2();
	system("pause");
	return 0;
}
*/