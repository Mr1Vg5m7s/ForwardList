#include<iostream>
#include<Windows.h>
#include<iomanip>
#include<fstream>
#include<algorithm>

#include"ForwardList.h"

using namespace std;
enum Color
{
	Black = 0, Blue = 1, Green = 2, Cyan = 3, Red = 4, Magenta = 5, Brown = 6, LightGray = 7, DarkGray = 8,
	LightBlue = 9, LightGreen = 10, LightCyan = 11, LightRed = 12, LightMagenta = 13, Yellow = 14, White = 15
};

void SetColor(int text, int background)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (WORD)((background << 4) | text));
}


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout.setf(ios::boolalpha);
	
	ForwardList<int> fl = { 1,8,6,1,4,5 };
	//fl.print();
	fl.remove(2);
	//fl.print();
	fl.sort();

	for (size_t i = 0; i < fl.length(); i++)
	{
		fl[i] *= 2;
	}

	//fl.print();
	ForwardList<int> fl2 = fl;
	cout << "fafsdf" << endl;
	fl.print();
	fl2.print();
	cout << endl;
	ForwardList<int> fl3;
	cout << endl;
	fl3 = fl;
	fl3.print();
	fl3 = fl + fl2;
	fl3.print();
}