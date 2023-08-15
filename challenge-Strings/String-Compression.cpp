#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << '\n';
    int count = 1;

    string comp = "";
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            comp += s[i - 1] + to_string(count);
            count = 1;
        }
    }
    comp += s.back() + to_string(count);
    cout << comp << endl;

    return 0;
}