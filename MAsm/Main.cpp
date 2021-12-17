#include <iostream>

using namespace std;

extern "C" int MyFunc();

extern "C" int TestFloat();

int main()
{
	cout << "The result is: " << MyFunc() << endl;
	return 0;
}