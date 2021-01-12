#include <iostream>

#include <conio.h>

#include <iomanip>

using namespace std;



//субботний вечер (в какую сумму обойдётся заказ в пиццерии) и хватит ли денег или нет, имея в кошельке 100000 руб.



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

double hours;

double minutes;
int n, i, s = 0; // n-количество заказываемых пицц; s-сумма скидки, зависящей от количества пицц.

cout << " Enter pizza =";

cin >> pizza;

cout << " Enter kolichestvo pizz =";

cin >> n;

cout << " Enter drink =";

cin >> drink;

cout << " Enter sweet =";

cin >> sweet;

cout << " Enter snack =";

cin >> snack;

cout << " Enter sauce =";

cin >> sauce;



cost = Total_cost(pizza,drink,sweet,snack,sauce);

cout << " Стоимость товара " << cost << endl;



sum_sk = Sale (cost, 3);

cout << " Сумма скидки (3% от стоимости) " << sum_sk << endl;



cout << " Во сколько вам привезти заказ (часы)? " ;

cin >> hours;

cout << " Во сколько вам привезти заказ (минуты)? " ;

cin >> minutes;

cout << " Время доставки (часы) " << hours  << endl;

cout << " Время доставки (минуты) " << minutes  << endl;

if (cost <= 100000)

cout << " Вам хватит денег" << endl;

else

{

cout << " Вам не хватит денег" << endl;

}



//скидка зависит от количества пицц - чем больше пицц тем больше сумма скидки.

for (i = 1; i <= n; i++)

{

s += i;



}

cout << " Количество пицц " << n  << endl << " Сумма скидки (количественной) " << s << endl;

// состав в пицце
int my_array[4];

my_array[0] = 2100; // калории
my_array[1] = 15; // углеводы
my_array[2] = 16; // белки
my_array[3] = 18; // жиры
cout << " калорий в одной пицце (Ккал) " << my_array[0] << "; углеводов в пицце (гр.)  " << my_array[1] << "; белков в пицце (гр.)  " << my_array[2]  << "; жиров в пицце (гр.)   " << my_array[3];


 //вывод

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

