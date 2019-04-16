// test_New_Delete_for_Class.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "strngbad.h"
using std::cout;
using std::cin;
using std::endl;

void callme1(Stringbad &);
void callme2(Stringbad);

int main()
{
	Stringbad headline1("Chinese fake ph.D");
	Stringbad headline2("Valentine's day! ");
	cout << "Today's Hot News" << endl;
	cout << "headline1 : " << headline1<<endl;
	cout << "headline2 : " << headline2<<endl;
	callme1(headline1);
	cout << headline1<<endl;
	callme2(headline2);
	cout << headline2<<endl;
	cout << "Initialize one string with another : " << endl;
	Stringbad Zhai = headline1;
	cout << "Zhai Tianling: " << Zhai << endl;
	cout << "Assign one object with another : " << endl;
	Stringbad FFF;
	FFF = headline2;
	cout << "FFF: " << FFF << endl;
    std::cout << "Goodbye!\n"; 
}

void callme1(Stringbad & rsd)
{
	cout << "Stringbad called by reference: " << endl;
	cout << "	\"" << rsd << "\""<<endl;
}

void callme2(Stringbad  rsd)
{
	cout << "Stringbad called by value: " << endl;
	cout << "	\"" << rsd << "\"" << endl;
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
