#include "Adressa.h" 

int main() {

    Adressa* obj = new Adressa(); // ��������� ��'���� obj 

    obj->Set("Lviv", "Shewchenkova", 8);
    obj->Print();                 // ��������� ���������� ��'���� obj

    obj->SetName("Ternopil");     // �������� ��������� � name
    obj->SetStreet("Lvivska");
    obj->SetNumberHouse(3);
    obj->Print();                 // ������� ���

    Adressa* adressa1;            
    adressa1 = new Adressa[3];    // ��������� ������ � �������� �����
    adressa1->Set("Ivano-Frankivsr", "Myrnogo", 14);
    adressa1->Print();

    Adressa adressa2("Kyiv", "Tarnavskogo", 9);// ������ ������������ � �����������
    adressa2.Print();                          // ������� ���
    Adressa* adrs = &adressa2;   // �������� �� ����
    adrs->Print();               // ������ �����

    Adressa nazva[3];   // ��������� ������ � �������� �����
    nazva->Set("Harkiv", "Rrojizna", 9);
    nazva->Print();

    adressa2.Set("Poltava", "Nezaleshnosti", 1);
    adressa2.Print();

    void(Adressa:: * p)();
    p = &Adressa::Print;
    (adressa2.*p)();     // �������� �� �����

    delete obj;          // ������ ����������� ��� ����� obj
}