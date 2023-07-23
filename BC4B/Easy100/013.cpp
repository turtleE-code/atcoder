#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int oria = a;
    int orib = b;
    int oric = c;

    int cha, chb, chc;
    int count = 0;

    // 初手奇数処理
    if(a % 2 == 1 || b % 2 == 1 || c % 2 == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    while (cha % 2 == 0 && chb % 2 == 0 && chc % 2 == 0)
    {
        cha = 0.5 * (b + c);
        chb = 0.5 * (c + a);
        chc = 0.5 * (a + b);

        a = cha;
        b = chb;
        c = chc;
        count++;
        if(a == oria && b == orib && c == oric)
        {
            count = -1;
            break;
        }
    }

    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    cout << count << endl;
}