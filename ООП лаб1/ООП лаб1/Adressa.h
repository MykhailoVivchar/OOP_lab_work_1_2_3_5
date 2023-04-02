#pragma once
#include <iostream>
#include <string>
using namespace std;

const int NA_ME = 35;
const int STR_EET = 35;
class Adressa {
	char name[NA_ME];
	char street[STR_EET];
	int numberhouse = 0;
public:
	Adressa();                      // Конструктор без параметрів
	Adressa(const Adressa& copy);   // Конструктор копіювання
	Adressa(const char*, const char*, int); // Конструктор з параметрами
	~Adressa();                     // Деструктор

	char* GetName();                // отримати назву 
	char* GetStreet();              // отримати вулицю
	int GetNumberHouse();           // отримати номер будинка

	void SetName(const char*);      // Ввести назву
	void SetStreet(const char*);    // Ввести вулицю
	void SetNumberHouse(int);       // Ввести номер будинку
	void Set(const char*, const char*, int);   // Ввести імя, вулицю, номер будинку
	void Print();                              // Вивести всю інформацію
};