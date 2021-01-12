#include <iostream>
using namespace std;
// Lobodenko
int main()
{
int FGH;
FGH = 10;
PTR = FGH; // ошибка
*PTR = 20;
cout << &FGH << endl;
cout << PTR << endl;
cout << FGH << endl;
cout << *PTR << endl;
return 0;
}
