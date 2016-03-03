#include <iostream>
#include <stdlib.h>
using namespace std;

typedef struct 
{
	int x;
	int y;
}Coord;


void fun(int &a, int &b);

int main(void) {

	//变量别名
	int a = 10;
	int &b = a;

	b = 20;
	cout << a << endl;

	a = 30;
	cout << b << endl;



	//结构体别名
	Coord c;
	Coord &c1 = c;
	c1.x = 10;
	c1.y = 20;

	cout << c.x<<"\t" << c.y << endl;


	//指针别名
	int d = 3;
	int *p = &d;
	int *&pp = p;

	*pp = 6;
	cout << d << endl;


	//函数指针
	int fx = 10;
	int fy = 20;
	cout << fx << "," << fy << endl;
	fun(fx, fy);
	cout << fx << "," << fy << endl;

	system("pause");
	return 0;
}


void fun(int &a, int &b) {
	int c = 0;
	c = a;
	a = b;
	b = c;
}