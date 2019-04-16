// firstref.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

int main()
{

	using namespace std;
	int rats = 100;
	int & rodents = rats;
    cout << "This is the origin "<< rats<<"		"<< "This is the reference "<< rodents<<"\n"; 
	rodents++; 
	cout << "This is the origin " << rats << "		" << "This is the reference " << rodents << "\n";
	cout << "This is the address of origin " << &rats << "	" << " This is the address of reference " << &rodents << "\n";


	int *prats = &rodents;
	cout << "This is the address of rodents " << prats << "\n";
	cout << "This is the value of prats " << *prats << "\n";
	int bunnies = 50;
	rodents = bunnies;
	cout << "This is the rats " << rats << "\n" << "This is the rodents " << rodents << "\n";
	cout << "This is the bunnies " << bunnies << "\n";
	cout << "This is the address of rats " << &rats << "\n" << " This is the address of rodents " << &rodents << "\n";
	cout << "This is the address of bunnies " << &bunnies << "\n" << " This is the address of rodents " << &rodents << "\n";

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
