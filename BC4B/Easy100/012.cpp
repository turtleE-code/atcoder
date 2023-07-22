#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;

    vector<int> a(n);
    for (auto &x : a)
    {
        cin >> x;
    }

    int left = INFINITY;
    int right = INFINITY;
    int min = INFINITY;

    // 左回り
    for (int i = 0; i < n - 1; i++)
    {
        left = a.at(i) + (k - a.at(i + 1));
        if (min > left)
        {
            min = left;
        }
        // cout << left << endl;
    }

    // 右回り
    for (int i = 1; i < n; i++)
    {
        right = (k - a.at(i)) + a.at(i-1);
        if (min > right)
        {
            min = right;
        }
        // cout << right << endl;
    }

    min = std::min(min, a.at(n-1) - a.at(0));
    cout << min << endl;
}