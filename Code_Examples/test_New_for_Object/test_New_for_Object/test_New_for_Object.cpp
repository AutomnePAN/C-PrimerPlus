// test_New_for_Object.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <string>
#include <new>
using namespace std;
const int BUF = 512;

class JustTesting
{
public:
	JustTesting(const string & s = "Just Testing", int n = 0)
	{
		words = s; number = n; cout << words << " constructed!\n";
	}
	~JustTesting()
	{
		cout << words << "destroyed! \n";
	}
	void Show() const
	{
		cout << words << " , " << number << endl;
	}

private:
	string words;
	int number;

};


int main()
{
	char  * buffer = new char[BUF];
	JustTesting * pc1, *pc2;

	pc1 = new (buffer) JustTesting;
	pc2 = new JustTesting("HEAP1", 20);

	cout << "Memory block addresses: \n" << "buffer: " << (void *)buffer << "	heap： " << pc2 << endl;
	cout << "Memory contents:\n";
	cout << pc1 << ":";
	pc1->Show();
	cout << pc2 << ":";
	pc2->Show();

	JustTesting * pc3, *pc4;

	pc3 = new (buffer) JustTesting("Good Idea", 6);
	pc4 = new JustTesting("HEAP2", 10);

	cout << "Memory contents:\n";
	cout << pc3 << ":";
	pc3->Show();
	cout << pc4 << ":";
	pc4->Show();

	delete pc2;
	delete pc4;
	pc1->~JustTesting();
	pc3->~JustTesting();
	delete[] buffer;
	cout << "Done\n";
	return 0;


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
