#include "open.h"
#include <Windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    MasO<int> masiv;
    MasO<int> masiv2;
    MasO<int> masiv3 = masiv;

    masiv.Add(1);
    masiv.Add(4);
    masiv.Add(6);
    masiv.Add(7);
    masiv.Add(6);
    masiv.Add(4);

    masiv2.Add(1);
    masiv2.Add(4);
    masiv2.Add(6);
    masiv2.Add(7);
    masiv2.Add(6);
    masiv2.Add(9);

    masiv3 = masiv;

    if (masiv == masiv3)
    {
        cout << "����� (masiv � masis2) ���������." << endl;
    }
    else
    {
        cout << "�����(masiv � masiv2) �� ���������." << endl;
    }
    if (masiv != masiv2)
    {
        cout << "����� (masiv � masiv2) �� ���������." << endl;
    }
    else
    {
        cout << "����� (masiv � masiv2) ���������." << endl;
    }

    cout << masiv[2] << "-" << masiv2[2] << endl;

    cout << "1 �����" << endl;
    masiv.Show();
    cout << "2 �����" << endl;
    masiv2.Show();
    cout << "3 �����" << endl;
    masiv3.Show();
}
