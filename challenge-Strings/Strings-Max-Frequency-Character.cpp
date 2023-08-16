#include <iostream>
using namespace std;

void maxFrequency(string s)
{
    int maxCount = 0;
    char maxFreq;
    for (int i = 0; i < s.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (i == j)
            {
                continue;
            }
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (maxCount < count)
        {
            maxCount = count;
            maxFreq = s[i];
        }
    }

    if (maxCount == 0)
    {
        cout << s << endl;
    }
    else
        cout << maxFreq << endl;
}

int main()
{
    string s;
    cin >> s;

    maxFrequency(s);

    return 0;
}
