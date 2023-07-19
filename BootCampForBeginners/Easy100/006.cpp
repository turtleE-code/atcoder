#include <bits/stdc++.h>
using namespace std;

int main() {
    //41min

    int64_t height, width;
    int64_t count = 0;
    cin >> height >> width;

    if(width % 2 == 0 || height % 2 == 0)
    {
        count = (width * height) / 2;
    }
    else
    {
        count = (width * height) / 2 + 1;
    }

    if(width == 1 || height == 1) count = 1;

    cout << count << endl;
}