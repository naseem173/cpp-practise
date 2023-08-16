#include <iostream>
using namespace std;
int main()
{

    string s;
    cin >> s;
    string isPali = "true";
    int len = s.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] == s[len - 1])
        {

            len--;
        }
        else
        {
            isPali = "false";
            break;
        }
    }

    cout << isPali << endl;

    return 0;
}
