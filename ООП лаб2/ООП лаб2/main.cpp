#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

class abstracted {
public:
    virtual void Show() = 0;
};
// ���� �������
class Working :public abstracted
{
protected:
    string name;
    string sex;
    int age;
    string CLASS = "-�������-";
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
        cout << " ����:" << CLASS << "\n";
        cout << " ���: " << name << "\n";
        cout << " �����: " << sex << "\n";
        cout << " ³�: " << age << "\n\n";
    }
};
string Working::administrations = "Ternopil City Council";

// ���� �������
class Engineer : public Working
{
protected:
    string work_experience;
    string CLASS = "-�������-";
public:

    Engineer(string name, string sex, int age, string work_expreence) :Working(name, sex, age) {
        this->work_experience = work_expreence;
    }
    Engineer() { }
    ~Engineer() { }
    void Show() {
        cout << " ����:" << CLASS << "\n";
        cout << " ���: " << name << "\n";
        cout << " �����: " << sex << "\n";
        cout << " ³�: " << age << "\n";
        cout << " ���� ������: " << work_experience << "\n\n";
    }
};

// ���� �����
class Frames : public Working
{
protected:
    int number_working;
    string CLASS = "-�����-";
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
        cout << " ����:" << CLASS << "\n";
        cout << " �����: " << name << "\n";
        cout << " ³�: " << age << "\n";
        cout << " ʳ������ ����������: " << number_working << "\n\n";
    }
};


// ���� �����������
class Administration : public Working
{
protected:
    string data_of_creation;
    string CLASS = "-�����������-";
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
        cout << " ����:" << CLASS << "\n";
        cout << " �����: " << name << "\n";
        cout << " ³�: " << age << "\n";
        cout << " ���� ��������� �����������: " << data_of_creation << "\n";
    }
};

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Working a1("���������", "������", 47);
    a1.Show();

    Engineer a2("����", "������", 42, "7 ����");
    a2.Show();

    Frames a3;
    a3.Set("���� ����������", 27, 64);
    a3.Show();

    Administration a4;
    a4.Set("������������ ����� ����", 27, "13.10.1995�");
    a4.Show();

}