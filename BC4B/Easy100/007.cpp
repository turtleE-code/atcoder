#include <bits/stdc++.h>
using namespace std;

int main() {
    //49min
    int bingo[3][3];
    int check[3][3] = {0};
    bool ans = false;
    int N;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cin >> bingo[i][j];
        }
    }

    cin >> N;
    int b[N];

    for(int i = 0; i < N; i++)
    {
        cin >> b[i];
    }

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            for(int k = 0; k < 3; k++)
            {
                if(b[i] == bingo[j][k])
                {
                    check[j][k] = 1;
                }
            }
        }
    }

    // 縦
    for(int i = 0; i < 3; i++)
    {
        if(check[i][0] + check[i][1] + check[i][2] == 3) ans = true;
    }

    // 横
    for(int i = 0; i < 3; i++)
    {
        if(check[0][i] + check[1][i] + check[2][i] == 3) ans = true;
    }

    // 斜め
    if(check[0][0] + check[1][1] + check[2][2] == 3) ans = true;
    if(check[2][0] + check[1][1] + check[0][2] == 3) ans = true;

    if(ans == true)
    {
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}