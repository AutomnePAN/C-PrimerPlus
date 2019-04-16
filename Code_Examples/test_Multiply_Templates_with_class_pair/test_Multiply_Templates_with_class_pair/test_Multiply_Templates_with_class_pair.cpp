

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

template<class T1, class T2>
class Pair
{

private:
	T1 a; T2 b;

public:
	T1 & first();
	T2 & second();
	T1 first() const { return a; }
	T2 second() const { return b; }

	Pair(const  T1 & A, const T2 & B) :a(A), b(B) {} ;
	Pair() {};
};


template <class T1, class T2>
T1 & Pair<T1, T2>::first()
{
	return a;
}

template<class T1, class T2>
T2 & Pair<T1, T2>::second()
{
	return b;
}



int main()
{
	using std::cout;
	using std::endl;
	using std::string;
	Pair<string, int> ratings[4] =
	{
	Pair<string, int>("Bob", 5),
	Pair<string, int>("Patric", 4),
	Pair<string, int>("Sandy", 5),
	Pair<string, int>("George", 3)
	};

	for (int i = 0; i < 4; i++)
	{
		cout << "Name:\t" << ratings[i].first() << endl;
		cout << "Ratings:\t" << ratings[i].second() << endl;
	}
	cout << "End of job" << endl;
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
