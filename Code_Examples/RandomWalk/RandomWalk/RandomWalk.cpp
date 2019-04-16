// RandomWalk.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include "vector.h"
#include <cstdlib>
#include <ctime>

int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double direction;
	Vector Step;
	Vector Result(0.0, 0.0,	VECTOR::Vector::RECT);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter the distance (q to quit): " << endl;
	while (cin >> target)
	{
		cout << "Enter step length" << endl;
		if (!(cin >> dstep))
		{
			break;
		}

		while (Result.maglval() < target)
		{
			direction = rand() % 360;
			Step.reset(dstep, direction, Vector::POL);
			Result = Result + Step;
			steps++;
		}
		cout << "After " << steps << " steps , the drunk man has arrived at: \n";
		cout << Result << endl;
		Result.polar_mode();
		cout << " or \n" << Result << endl;
		cout << "Average outward distance per step = " << Result.maglval() / steps << endl;
		steps = 0;
		Result.reset(0.0, 0.0, Vector::POL);

		cout << "Enter target distance (q to quit!)" << endl;
	}
    std::cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')
		continue;
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
