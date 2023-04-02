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
        cout << "Масив (masiv і masis2) однаковий." << endl;
    }
    else
    {
        cout << "Масив(masiv і masiv2) не однаковий." << endl;
    }
    if (masiv != masiv2)
    {
        cout << "Масив (masiv і masiv2) не однаковий." << endl;
    }
    else
    {
        cout << "Масив (masiv і masiv2) однаковий." << endl;
    }

    cout << masiv[2] << "-" << masiv2[2] << endl;

    cout << "1 Масив" << endl;
    masiv.Show();
    cout << "2 Масив" << endl;
    masiv2.Show();
    cout << "3 Масив" << endl;
    masiv3.Show();
}
