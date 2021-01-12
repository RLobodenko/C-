#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
 cout << "Student Lobodenko." << endl;
 cout << endl;

double gamma=-205.305; // объявление переменной γ (гамма)
 double x=0.1722;
 double  y=6.33;
 double  z=3.25e-4;
/* Вычисление значения переменной γ*/
 gamma=5*atan(x)-1/4*acos(x)*(x+3*fabs(x-y)+(x,2))/(fabs(x-y)*z+(x,2));

cout << "Value gamma= " << gamma;
 getch();
 return 0;
}
