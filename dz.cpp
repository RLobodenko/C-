#include <iostream>
#include <conio.h>
using namespace std;

//��������� ����� (� ����� ����� �������� ����� � ��������)

int main()
{
// ������ ���������� ����������
float pizza; //���������� ��� �������� �������� �� �����
float drink; //���������� ��� �������� �������� �� �������
float sweet; //���������� ��� �������� �������� �� ������
float Total; //���������� ��� �������� ����� ��������
//***********************
// ������ ������������� ����������
cout << " Enter pizza =";
cin >> pizza;
cout << " Enter drink =";
cin >> drink;
cout << " Enter sweet =";
cin >> sweet;
// ����� ������� ������������� ����������
//������ ��������
Total = pizza+drink+sweet;
cout << " TOTAL COST " << Total;
_getch();
return 0;
}
