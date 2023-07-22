#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    string S;
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> N >> S;

    for(int i = 0; i < N; i++)
    {
        if(S[i] == 'A')
        {
            a++;
        }else if(S[i] == 'B')
        {
            b++;
        }else if(S[i] == 'C')
        {
            c++;
        }

        if(a >= 1 && b >= 1 && c >= 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    
}