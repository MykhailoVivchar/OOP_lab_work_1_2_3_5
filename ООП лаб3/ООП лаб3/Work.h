#pragma once
#include <iostream>
#include <string>

using namespace std;

class TObject
{
public:
	virtual void Show() = 0;
};

class Staff : public TObject
{
protected:
	string name;
	float salary = 0;
public:
	Staff();
	Staff(Staff&) {};
	Staff(string, float);

	void Show() = 0;
};


class Worker : public Staff
{
protected:
	int exp = 0;
public:
	Worker();
	Worker(const Worker&);
	Worker(string, float, int);
	void Show();
};

class Engineer : public Worker
{
private:
	string speciality;
public:
	Engineer();
	Engineer(const Engineer&);
	Engineer(string, float, int, string);
	void Show();
};


class Administration : public Staff
{
private:
	string position;
public:
	Administration();
	Administration(const Administration&);
	Administration(string, float, string);
	void Show();
};