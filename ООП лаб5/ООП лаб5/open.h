#pragma once
#include <iostream>
#include <vector>
using namespace std;

template<class T>
class MasO
{
public:
	MasO();				// Конструктор
	MasO(MasO& m);		//Конструктор копіювання
	void Add(T date);	//Додавання нового елемента в масив 
	void Show();		//Демонстрація всього масива

	T& operator[](const int index); //Перегрузка оператора індексацій
	bool operator==(const MasO<T>& Other); //Перегрузка оператора рівності
	bool operator!=(const MasO<T>& Other); //Перегрузка оператора нерівності

private:
	vector<T> m_array;
	int size;
};

template<class T>
inline MasO<T>::MasO()
{
	m_array.reserve(8);
}

template<class T>
inline MasO<T>::MasO(MasO& m)
{
	this->m_array = m.m_array;
	this->size = m.size;
}

template<class T>
void MasO<T>::Add(T date)
{
	m_array.push_back(date);
}

template<class T>
inline void MasO<T>::Show()
{
	for (int i = 0; i < m_array.size(); i++)
	{
		cout << i + 1 << ".- " << m_array[i] << endl;
	}

}

template<class T>
T& MasO<T>::operator[](const int index)
{
	return m_array[index];
}

template<class T>
inline bool MasO<T>::operator==(const MasO<T>& Other)
{
	return this->m_array == Other.m_array;
}

template<class T>
inline bool MasO<T>::operator!=(const MasO<T>& Other)
{
	return this->m_array != Other.m_array;
}