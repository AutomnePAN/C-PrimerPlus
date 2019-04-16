// Explicit_instantation.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

struct job
{
	char name[20];
	double salary;
};

template <class T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
};

template<> void Swap<job>(job &a, job &b)
{
	double temp;
	temp = a.salary;
	a.salary = b.salary;
	b.salary = temp;
}

int main()
{
	char a = 'A', b = 'B';
	cout << "a = " << a << " " << "b = " << b << "\n";
	Swap(a, b);
	cout << "a = " << a << " " << "b = " << b << "\n";
	
	int c = 10, d = 20;
	cout << "a = " << c << " " << "b = " << d<<"\n";
	Swap(c, d);
	cout << "a = " << c << " " << "b = " << d << "\n";
	
	job A = { "Chris", 2000 };
	job B = { "Angel", 2300 };

	cout << "a = " << A.salary << " " << "b = " << B.salary << "\n";
	Swap(A, B);
	cout << "a = " << A.salary << " " << "b = " << B.salary << "\n";
	std::cout << "Hello World!\n"; 
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
