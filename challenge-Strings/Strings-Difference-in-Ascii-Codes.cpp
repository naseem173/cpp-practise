#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int diff;

    string comp = "";

    for (int i = 1; i < s.length(); i++)
    {
        diff = s[i] - s[i - 1];
        comp += s[i - 1] + to_string(diff);
    }

    comp += s.back();

    cout << comp << endl;

    return 0;
}