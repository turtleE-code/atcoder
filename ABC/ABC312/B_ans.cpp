#include <bits/stdc++.h>
using namespace std;

bool check(int a, int b, vector<string> s)
{
    // 左上 #
    for(int i = a; i < a+3; i++)
    {
        for(int j = b; j < b+3; j++)
        {
            if(s.at(i).substr(j, 1) != "#")
            {
                return false;
            }
        }
    }

    // 右下 #
    for(int i = a+6; i < a+9; i++)
    {
        for(int j = b+6; j < b+9; j++)
        {
            if(s.at(i).substr(j, 1) != "#")
            {
                return false;
            }
        }
    }

    // 左上 .
    if(s.at(a).substr(b+3, 1) != ".") return false;
    if(s.at(a+1).substr(b+3, 1) != ".") return false;
    if(s.at(a+2).substr(b+3, 1) != ".") return false;
    if(s.at(a+3).substr(b, 4) != "....") return false;

    // 右下 .
    if(s.at(a+6).substr(b+5, 1) != ".") return false;
    if(s.at(a+7).substr(b+5, 1) != ".") return false;
    if(s.at(a+8).substr(b+5, 1) != ".") return false;
    if(s.at(a+5).substr(b+5, 4) != "....") return false;

    return true;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for(auto &x : s) 
    { 
        cin >> x; 
    }

    for(int i = 0; i < n - 8; i++)
    {
        for(int j = 0; j < m - 8; j++)
        {
            if(check(i, j, s) == true){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
}