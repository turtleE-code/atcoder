#include <bits/stdc++.h>
using namespace std;

int main() {
    // 17min
    
    int N;
    int amount;
    cin >> N;
    
    for(int n = 0; n <= 50000; n++)
    {
        amount = n * 1.08;
        if(amount == N)
        {
            cout << n << endl;
            return 0;
        }
    }

    cout << ":(" << endl;
}