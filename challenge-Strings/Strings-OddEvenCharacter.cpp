#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i % 2 == 0)
        {
            s[i] = char(int(s[i]) + 1);
        }

        else
        {
            s[i] = char(int(s[i]) - 1);
        }
    }

    cout << s << endl;

    return 0;
}