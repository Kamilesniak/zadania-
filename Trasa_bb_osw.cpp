#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{

	cout << "Program oblicza odleglosci na trasie,sprawdza ktora jest dluzsza:" << endl << "Bielsko Biala - Czechowice - Oswiecim " << endl
		<< "Bielsko Biala- Kety - Oswiecim" << endl << endl;
	
	double bielskoX = 49.8224500, bielskoY= 19.0468600;
	double czechowiceX = 49.9134200, czechowiceY = 19.0047900;
	double oswiecimX = 50.0343700, oswiecimY = 19.2103700;
	double ketyX = 49.8821400, ketyY = 19.2233300;
	
	//Bielsko Biala - Czechowice - Oswiecim
    double x1=sqrt(((49.9134200-49.8224500)*(49.9134200-49.8224500))+((19.0047900-19.0468600)*
    (19.0047900-19.0468600))) ;
   double x2=sqrt(((50.0343700-49.9134200)*(50.0343700-49.9134200))+((19.2103700-19.0047900)*
    (19.2103700-19.0047900))) ;
   cout <<"trasa Bielsko Biala - Czechowice - Oswiecim= "<< x1+x2<<endl; 
    
    //Bielsko Biala- Kety - Oswiecim
    double x3=sqrt(((49.8821400-49.8224500)*(49.8821400-49.8224500))+((19.2233300-19.0468600)*
    (19.2233300-19.046860))) ;
   double x4=sqrt(((50.0343700-49.8821400)*(50.0343700-49.8821400))+((19.2103700-19.2233300)*
    (19.2103700-19.2233300))) ;
    cout <<"trasa Bielsko Biala- Kety - Oswiecim= "<<x3+x4<<endl<<endl;
    if (x1+x2>x3+x4)
    {cout<<"Trasa Bielsko Biala - Czechowice - Oœwiecim jest dluzsza od trasy Bielsko Biala - Kety - Oswiecim "<<endl;}
    else
    {cout<<"Trasa Bielsko Biala - Kety - Oswiecim jest dluzsza od trasy Biala - Czechowice - Oswiecim "<<endl;}
		cin.get();
	return 0;
}
