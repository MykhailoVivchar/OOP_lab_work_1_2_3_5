#include <iostream>
#include "List.h"
#include "Work.h"
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Worker worker1("Михайло Вербицький", 500, 2);
	Worker worker2("Володимир Великий", 1000, 14);
	Engineer engineer1("Олександр Тимошенко", 600, 1, "Еколог");
	Administration administrator1("Віктор Гончаренко", 500, "Менеджер");

	List workers("Workers");
	workers.Add(&worker1);
	workers.Add(&worker2);
	workers.Show();

	List engineers("Engineers");
	engineers.Add(&engineer1);
	engineers.Show();

	List administration("Administration");
	administration.Add(&administrator1);
	administration.Show();

	cout << "-----------------------------------" << endl;
	cout << "---Engineers---";
	workers[0]->Show();
	workers[1]->Show();
	cout << "-----------------------------------" << endl;
	return 0;
}
