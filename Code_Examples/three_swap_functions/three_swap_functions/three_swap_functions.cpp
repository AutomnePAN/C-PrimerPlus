// three_swap_functions.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

void swapp(int *a, int *b)
{
	int temps = *a;
	*a = *b;
	*b = temps;
};

void swapr(int & a, int &b)
{
	int temps = a;
	a = b;
	b = temps;
};

int cube1(int &x)
{
	return x * x *x;
};

int cube2(const int &x)
{

	return x*x*x;
};

int main()
{
	int wallet1 = 1000;
	int wallet2 = 10;
	std::cout << "wallet1: " << wallet1 << "	" << "wallet2: " << wallet2 << "\n";
	swapr(wallet1, wallet2);
	std::cout << "wallet1: " << wallet1 << "	" << "wallet2: " << wallet2 << "\n";
    std::cout << "Hello World!\n";


	double && refer = std::sqrt(36.2);
	std::cout << refer << "\n";

	int s;
	int l[] = { 4,3,2,1 };
	int v1 = cube2(l[2]);
	std::cout << v1 << "\n";
	std::cout << "Please inpout the side of the cube: ";
	std::cin >> s;
	std::cout << "The volume of the cube is: " << cube1(s) << "\n";
	std::cout << s << "\n";
	std::cout << "The volume of the cube is: " << cube2(s) << "\n";
	std::cout << s;
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
