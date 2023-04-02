#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class abstracted {
public:
    virtual void Show() = 0;
};
// клас робочий
class Working :public abstracted
{
protected:
    string name;
    string sex;
    int age;
    string CLASS = "-Робочий-";
public:
    static string administrations;
    Working() { }
    ~Working() { }
    Working(string name, string sex, int age) {
        this->name = name;
        this->sex = sex;
        this->age = age;
    }
    string GetName() {
        return name;
    };
    string GetSex() {
        return sex;
    }
    int GetAge() {
        return age;
    }
    void Show()
    {
        cout << " Клас:" << CLASS << "\n";
        cout << " Імя: " << name << "\n";
        cout << " Стать: " << sex << "\n";
        cout << " Вік: " << age << "\n\n";
    }
};
string Working::administrations = "Ternopil City Council";

// клас інженер
class Engineer : public Working
{
protected:
    string work_experience;
    string CLASS = "-Інженер-";
public:

    Engineer(string name, string sex, int age, string work_expreence) :Working(name, sex, age) {
        this->work_experience = work_expreence;
    }
    Engineer() { }
    ~Engineer() { }
    void Show() {
        cout << " Клас:" << CLASS << "\n";
        cout << " Імя: " << name << "\n";
        cout << " Стать: " << sex << "\n";
        cout << " Вік: " << age << "\n";
        cout << " Стаж роботи: " << work_experience << "\n\n";
    }
};

// клас кадри
class Frames : public Working
{
protected:
    int number_working;
    string CLASS = "-Кадри-";
public:
    Frames(string name, string sex, int age, int number_working) :Working(name, sex, age) {
        this->number_working = number_working;
    }
    Frames() { }
    ~Frames() { }
    void Set(string name, int age, int number_working) {
        this->name = name;
        this->age = age;
        this->number_working = number_working;
    }
    void Show() {
        cout << " Клас:" << CLASS << "\n";
        cout << " Назва: " << name << "\n";
        cout << " Вік: " << age << "\n";
        cout << " Кількість працівників: " << number_working << "\n\n";
    }
};


// клас адміністрація
class Administration : public Working
{
protected:
    string data_of_creation;
    string CLASS = "-Адміністрація-";
public:

    Administration(string name, string sex, int age, string data_of_creation) :Working(name, sex, age) {
        this->data_of_creation = data_of_creation;
    }
    Administration() { }
    ~Administration() { }
    void Set(string name, int age, string data_of_creation) {
        this->name = name;
        this->age = age;
        this->data_of_creation = data_of_creation;
    }
    void Show() {
        cout << " Клас:" << CLASS << "\n";
        cout << " Назва: " << name << "\n";
        cout << " Вік: " << age << "\n";
        cout << " Дата створення Адміністрації: " << data_of_creation << "\n";
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Working a1("Володимир", "Чоловік", 47);
    a1.Show();

    Engineer a2("Олег", "Чоловік", 42, "7 років");
    a2.Show();

    Frames a3;
    a3.Set("Штат працівників", 27, 64);
    a3.Show();

    Administration a4;
    a4.Set("Тернопільська міська рада", 27, "13.10.1995р");
    a4.Show();

}