#include "Adressa.h" 

int main() {

    Adressa* obj = new Adressa(); // Створення об'єкта obj 

    obj->Set("Lviv", "Shewchenkova", 8);
    obj->Print();                 // Виведення інформації об'єкта obj

    obj->SetName("Ternopil");     // Введення іформацію в name
    obj->SetStreet("Lvivska");
    obj->SetNumberHouse(3);
    obj->Print();                 // Вивести дані

    Adressa* adressa1;            
    adressa1 = new Adressa[3];    // Створення масива в динамічній памяті
    adressa1->Set("Ivano-Frankivsr", "Myrnogo", 14);
    adressa1->Print();

    Adressa adressa2("Kyiv", "Tarnavskogo", 9);// Виклик конструктора з параметрами
    adressa2.Print();                          // Вивести дані
    Adressa* adrs = &adressa2;   // Вказівник на обєкт
    adrs->Print();               // Виклик обєкта

    Adressa nazva[3];   // Створення масива в статичній памяті
    nazva->Set("Harkiv", "Rrojizna", 9);
    nazva->Print();

    adressa2.Set("Poltava", "Nezaleshnosti", 1);
    adressa2.Print();

    void(Adressa:: * p)();
    p = &Adressa::Print;
    (adressa2.*p)();     // Вказівник на метод

    delete obj;          // Виклик деструктора для обєкта obj
}