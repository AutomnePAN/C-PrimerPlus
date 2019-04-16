// test_Improved_String.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "String.h"

int main()
{
	using std::cin;
	using std::cout;
	using std::endl;
	String name;
	cout << "Hi, what's your name? " << endl;
	cin >> name;
	cout << name << " , okay, please input 10 sentences what you want to say: \n";
	String sayings[10];
	char temp[100];
	int total = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << i + 1 << " : ";
		cin.get(temp, 100);
		while (cin && cin.get() != '\n')
		{
			cout << "0" << endl;
			continue;
		}
		if (!cin || temp[0] != '\0')
		{
			cout << "1";
			continue;
		}
		else
			sayings[i] = temp;
		int total = i;
	}

	if (total > 0)
	{
		cout << "Here are your sayings: " << endl;
		for (int i = 0; i < total; i++)
			cout << sayings[i][0] << ": " << sayings[i] << endl;

	}
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
