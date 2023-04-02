#include "Work.h"
#include <iostream>
using namespace std;

// Constructors
Staff::Staff()
	:name("none"), salary(0) {}

Worker::Worker()
	: Staff(), exp(0) {}

Engineer::Engineer()
	: Worker(), speciality("none") {}

Administration::Administration()
	: Staff(), position("none") {}

Staff::Staff(string name, float salary)
	: name(name), salary(salary) {}

Worker::Worker(string name, float salary, int exp)
	: Staff(name, salary), exp(exp) {}

Engineer::Engineer(string name, float salary, int exp, string speciality)
	: Worker(name, salary, exp), speciality(speciality) {}

Administration::Administration(string name, float salary, string position)
	: Staff(name, salary), position(position) {}

Worker::Worker(const Worker& obj) {
	this->name = obj.name;
	this->salary = obj.salary;
	this->exp = obj.exp;
};

Engineer::Engineer(const Engineer& obj) {
	this->name = obj.name;
	this->salary = obj.salary;
	this->exp = obj.exp;
	this->speciality = obj.speciality;
};

Administration::Administration(const Administration& obj) {
	this->name = obj.name;
	this->salary = obj.salary;
	this->position = obj.position;
};

// методи
void Staff::Show()
{
	cout << endl;
	cout << "Імя робочого: " << name << endl;
	cout << "Зарплата робочого: $" << salary << endl;
}

void Worker::Show()
{
	Staff::Show();
	cout << "Досвід роботи: " << exp << endl;
}

void Engineer::Show()
{
	Worker::Show();
	cout << "Спеціальність інженера: " << speciality << endl;
}

void Administration::Show()
{
	Staff::Show();
	cout << "Посада адміністратора: " << position << endl;
}