#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        char ch;
        cin >> ch;

        if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
        {
            cout << "Alphabet."
                 << "\n";
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                cout << "Vowel";
            }
            else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                cout << "Consonant";
            }
        }
        else if (ch >= 48 && ch <= 57)
        {
            cout << "Digit.";
        }
        else
        {
            cout << "Special Character.";
        }
    }

    return 0;
}
