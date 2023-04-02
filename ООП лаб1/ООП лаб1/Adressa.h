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
	Adressa();                      // ����������� ��� ���������
	Adressa(const Adressa& copy);   // ����������� ���������
	Adressa(const char*, const char*, int); // ����������� � �����������
	~Adressa();                     // ����������

	char* GetName();                // �������� ����� 
	char* GetStreet();              // �������� ������
	int GetNumberHouse();           // �������� ����� �������

	void SetName(const char*);      // ������ �����
	void SetStreet(const char*);    // ������ ������
	void SetNumberHouse(int);       // ������ ����� �������
	void Set(const char*, const char*, int);   // ������ ���, ������, ����� �������
	void Print();                              // ������� ��� ����������
};