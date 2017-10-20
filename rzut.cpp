#define _USE_MATH_DEFINES 
#include <iostream>	
#include <cmath>
#include <windows.h>

using namespace std;

int main()
{
	
	double v0;
	double g;
	double kat;
	cout << "Program oblicza maksymalna wysokosc podczas lotu" << endl << endl;
	cout << "Podaj predkosc poczatkowa : ";
	cin >> v0;
	
	cout << endl << "podaj przyspieszenie : ";
	cin >> g;
	cout << endl << "podaj kat : ";
	
	do
	{
		cin >> kat;
		if (kat>90)
		{
			cout << "podaj liczbe z przedzia³u 0-90 " << endl;
		}
		if(kat<0)
		{
		cout << "podaj liczbe z przedzia³u 0-90 " << endl;
		}
	}
	while(kat<0||kat>90);

	cout << "Maksymalna wysokosc wynosi : " << (pow(v0, 2)*pow(sin(kat*M_PI/180),2))/2*g<<" m " << endl << endl;
	
	system("pause");
	return 0;
}
