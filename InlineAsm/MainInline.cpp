#include <iostream>

using namespace std;

/* Inline x86 ASM */

int power2(int num, int power)
{
	__asm
	{
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

int Formula1(int a, int b)
{
	//(a - 1) / 2 + 4 * (b + 1)
	//Result returns from eax
	__asm
	{
		mov eax, a;				eax = a
		dec eax;				eax = eax - 1
		sar eax, 1;				eax = eax / 2

		mov ebx, b;				ebx = b
		inc ebx;				ebx = ebx + 1
		sal ebx, 2;				ebx = 4 * ebx
		add eax, ebx;			eax = eax + ebx
	}
}

void RunFormula1()
{
	int a, b;
	cin >> a >> b;

	cout << "(a - 1) / 2 + 4 * (b + 1) = " <<
		Formula1(a, b) << '\n';
}

int Test1()
{
	__asm
	{
		mov eax, 514;
		sub ah, al;
	}
}

int main()
{
	//RunPower2();
	//RunFormula1();

	Test1();

	return 0;
}