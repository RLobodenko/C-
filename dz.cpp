#include <iostream>
#include <conio.h>
using namespace std;

//субботний вечер (в какую сумму обойдётся заказ в пиццерии)

int main()
{
// Раздел объявления переменных
float pizza; //переменная для хранения расходов на пиццу
float drink; //переменная для хранения расходов на напиток
float sweet; //переменная для хранения расходов на десерт
float Total; //переменная для хранения суммы расходов
//***********************
// Раздел инициализации переменных
cout << " Enter pizza =";
cin >> pizza;
cout << " Enter drink =";
cin >> drink;
cout << " Enter sweet =";
cin >> sweet;
// конец раздела инициализации переменных
//Раздел расчётов
Total = pizza+drink+sweet;
cout << " TOTAL COST " << Total;
_getch();
return 0;
}
