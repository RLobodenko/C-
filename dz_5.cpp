#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
using namespace std;
double platej (double a, double b, double c, double d);
int main()
{
setlocale(0, "");
double procent;
double symma_ssydy;
double platejey_v_god;
double chislo_let;
double plata;
cout << " vvedite procent =";
cin >> procent;
cout << " vvedite symmy ssydy =";
cin >> symma_ssydy;
cout << " vvedite platejei v god =";
cin >> platejey_v_god;
cout << " vvedite chislo let =";
cin >> chislo_let;

plata = platej(procent,symma_ssydy,platejey_v_god,chislo_let);

cout << " platej " << plata << endl;
return 0;
_getch();
return 0;
}
double platej (double a, double b, double c, double d)
{

return a*(b/c)/(1-pow(pow(((a/c)+1),-c),d));
}
