#include <bits/stdc++.h>

using namespace std;

int main()
{
    float num;
    cin>>num;
    int base;
    cin>>base;
    int n = num;
    float ad = num - n;
    int bd = n;
    string s = "";
    while (bd)
    {
        s = to_string(bd % base) + s;
        bd = bd / base;
    }
    s += '.';

    for (int i = 0; i < 6; i++)
    {
        ad *= base;
        if (ad < 1)
            s += '0';
        else
        {
            s += to_string(int(ad));
            ad -= (int)ad;
        }
    }
    cout << s;
}