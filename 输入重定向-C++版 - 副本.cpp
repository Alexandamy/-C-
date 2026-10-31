#include <iostream>
#include <fstream>
using namespace std;






int main()
{
	// 输入重定向
	ifstream instream("1.txt");

	if (!instream.is_open())
	{
		cout << "open file failed" << endl;
		return 1;
	}

	cin.rdbuf(instream.rdbuf());

	int T = 0;        // 定义测试用例数量

	if (!(cin >> T))  // 输入测试样例数量
		return 1;

	for (int i = 0; i < T; i++)      // 测试 T 组测试样例
	{
		// 求多个整数的和。例如：1 2 3 4 5
		int a, sum = 0;

		while (1)
		{
			if (!(cin >> a))
				return 0;           // 如果读取整数失败，则结束

			sum += a;

			char c = cin.get();     // 读取整数后面的一个字符

			if (c == '\n')
				break;              // 如果读到换行符，说明当前测试样例结束
		}

		cout << sum << endl;
	}

	return 0;
}