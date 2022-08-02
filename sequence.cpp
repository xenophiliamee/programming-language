#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int main()
{
    string a, b;
    int flagv = 0;
    cin >> a;
    cin >> b;
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] < 45 || a[i] > 57 || b[i] < 45 || b[i] > 57)
        {

            if (a[i] == b[i])
            {
                flagv++;
                if (i == 0)
                {
                    cout << "similar base pair is" << endl;
                }
                cout << a[i];
            }
            i++;
            cout << endl;
            if (flagv == 0)
            {
                cout << "sequence are NOT SAME";
            }
            else
            {
                cout << "Total similarity of your sequence is" << endl;
            }
        }
        else
        {
            cout << "******you enter a number******";
            break;
        }
    }
    getch();
    return 0;
}