// explicit_specialization.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
using namespace std;

template <typename T>
void Swap(T &a, T &b);

struct job {
	char name[40];
	double salary;
	int floor;
};

template <> void Swap<job>(job &a, job &b);
void showjob(job &j);

int main()
{
	int  i = 10, j = 20;
	
	cout << i << " " << j << "\n";

	Swap(i, j);

	cout << i << " " << j << "\n";

	job j1 = { "James Bond", 200000, 7 };
	job j2 = { "Eason Hunt", 190000, 6 };
	showjob(j1);
	showjob(j2);

	Swap(j1, j2);
	showjob(j1);
	showjob(j2);
    std::cout << "Hello World!\n"; 
}

void showjob(job &j)
{
	cout << "The name is : " << j.name << "\n";
	cout << "His or her salary is : " << j.salary << "\n";
	cout << "The floor he work is : " << j.floor << "\n";
}

template <typename T>
void Swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<> void Swap<job>(job &a, job &b)
{
	double t1;
	int t2;
	t1 = a.salary;
	a.salary = b.salary;
	b.salary = t1;

	t2 = a.floor;
	a.floor = b.floor;
	b.floor = t2;
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
