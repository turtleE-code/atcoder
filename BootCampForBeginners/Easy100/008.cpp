#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    int num, numSqrt, bDigit;
    bool ans = false;

    cin >> a >> b;

    bDigit = to_string(b).length();

    num = a * pow(10, bDigit) + b;
    numSqrt = sqrt(num);

    if(num == pow(numSqrt, 2)) ans = true;

    if(ans == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}