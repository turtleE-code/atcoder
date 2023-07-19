#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> count;  // 数字 カウント

    int N;
    int x;
    int max = -1;
    int max_num = -1;
    cin >> N;

    for(int i = 0; i < N; i++)
    {
        cin >> x;
        count[x] += 1;
    }

    for (auto p : count) {
        if(max < p.second)
        {
            max = p.second;
            max_num = p.first;
        }
    }

    cout << max_num << " " << max << endl;
}
