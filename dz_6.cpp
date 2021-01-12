#include <iostream>

#include <conio.h>

#include <math.h>

#include <iomanip>

using namespace std;



int main() {

double x;

double y;

double g;

cout << "Enter x= "; cin >> x;

cout << "Enter y= "; cin >> y;

if ((x*y > 0,5 ) && (x*y < 10)){



g=exp(3*x + 2  - fabs(y));

    cout << "Value g= " << g;

}



else if ((x*y > 0,1 ) && (x*y < 0,5)){





g=pow(fabs(3*x + 2 + y), 1/3);

    cout << "Value g= " << g;



}



else {

    g=2*pow(3*x + 2, 2);

    cout << "Value g= " << g;

}



_getch(); return 0;

}

