#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

//субботний вечер (в какую сумму обойдётся заказ в пиццерии) и хватит ли денег или нет, имея в кошельке 100 руб.

double Total_cost (double a, double b, double c, double d, double e);
double Sale (double stoim, double sk);

int main()
{
setlocale(0, "");
double pizza; //переменная для хранения расходов на пиццу
double drink; //переменная для хранения расходов на напиток
double sweet; //переменная для хранения расходов на десерт
double snack; //переменная для хранения расходов на закуску
double sauce; //переменная для хранения расходов на соус
double cost; // стоимость
double sum_sk;
cout << " Enter pizza =";
cin >> pizza;
cout << " Enter drink =";
cin >> drink;
cout << " Enter sweet =";
cin >> sweet;
cout << " Enter snack =";
cin >> snack;
cout << " Enter sauce =";
cin >> sauce;

cost = Total_cost(pizza,drink,sweet,snack,sauce);
cout << "Стоимость товара " << cost;

sum_sk = Sale (cost, 3);
cout << " Сумма скидки " << sum_sk;

if (cost <= 100)
cout << " Вам хватит денег" << endl;
else
{
cout << " Вам не хватит денег" << endl;
}


_getch();
return 0;
}

double Total_cost (double a, double b, double c, double d, double e)
{
return a+b+c+d+e;
}
double Sale (double stoim, double sk)
{
return stoim/100*sk;
}
