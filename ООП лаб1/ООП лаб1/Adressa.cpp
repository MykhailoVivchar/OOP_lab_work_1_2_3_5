#include "Adressa.h"
using namespace std;
// Конструктор без параметрів
Adressa::Adressa() {
    cout << "-Constructor-" << "\n";
}
// Конструктор копіювання
Adressa::Adressa(const Adressa& copy) {
    for (size_t i = 0; i < NA_ME; i++)
    {
        name[i] = copy.name[i];
    }
    for (size_t i = 0; i < STR_EET; i++)
    {
        street[i] = copy.street[i];
    }
    numberhouse = copy.numberhouse;
    cout << "-Copy constructor-" << "\n";
}
// Конструктор з параметрами
Adressa::Adressa(const char* NAME, const char* STREET, int NUMBERHOUSE)
{
    cout << "-Constructor with parametrs" << "\n";
    for (size_t i = 0; i < NA_ME; i++)
    {
        name[i] = NAME[i];
    }
    for (size_t i = 0; i < STR_EET; i++)
    {
        street[i] = STREET[i];
    }
    numberhouse = NUMBERHOUSE;
    
}
// Деструктор
Adressa::~Adressa() {
    cout << "-Destructor-" << "\n";
}
// Ввести імя, вулицю, номер будинку
void Adressa::Set(const char* new_name, const char* new_street, int new_numberhouse)
{
    SetName(new_name);
    SetStreet(new_street);
    numberhouse = new_numberhouse;
}
// Ввести імя
void Adressa::SetName(const char* new_name) {
    for (size_t i = 0; i < NA_ME; i++)
    {
        name[i] = new_name[i];
    }
}
// Ввести вулицю
void Adressa::SetStreet(const char* new_street) {
    for (size_t i = 0; i < STR_EET; i++)
    {
        street[i] = new_street[i];
    }
}
// ВВести номер будинка
void Adressa::SetNumberHouse(int new_numberhouse) {
    numberhouse = new_numberhouse;
}
// Метод для виводу інформації
void Adressa::Print() {
    cout << " Name: " << name << "\n";
    cout << " Street: " << street << "\n";
    cout << " Number house: " << numberhouse << "\n\n";
}