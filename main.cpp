// subdir.cpp: 定义应用程序的入口点。
//

#include "main.h"
#include "math\add.h"
using namespace std;

int main()
{
	cout << add<int>(1, 3) << endl;
	cout << add<string>("Hello ", "LiuYuan") << endl;
	cout << add<double>(1.3, 2.8) << endl;
	return 0;
}


