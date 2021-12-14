#include <iostream>

using namespace std;

/* Inline x86 ASM */

int power2(int num, int power)
{
	_asm {
		mov eax, num;
		mov ecx, power;
		shl eax, cl;
	}
}

void RunPower2()
{
	int num = 0, power = 0;
	cout << "num = ";
	cin >> num;
	cout << "power = ";
	cin >> power;
	cout << "Number " << num
		<< " multiplied to 2 in the power "
		<< power << " is "
		<< power2(num, power) << " \n";
}

int main()
{
	RunPower2();
	return 0;
}