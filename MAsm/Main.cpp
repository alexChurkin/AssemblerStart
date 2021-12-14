#include <iostream>

using namespace std;

extern "C" int MyFunc();

int main()
{
	cout << "The result is: " << MyFunc() << endl;
	return 0;
}