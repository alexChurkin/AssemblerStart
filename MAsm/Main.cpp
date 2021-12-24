#include <iostream>

using namespace std;

//extern "C" int MyFunc();

extern "C" int MFunc5();

int main()
{
	cout << "The result is: " << MFunc5() << endl;
	return 0;
}