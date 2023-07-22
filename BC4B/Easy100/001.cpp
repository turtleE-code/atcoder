#include <bits/stdc++.h>
using namespace std;

int main() {
    bool ans = true;
    if(ans)
    {
        // answer
        int A, B;
        cin >> A >> B;
        int ans = (B - 1 + A - 2) / (A - 1);
        cout << ans << endl;

        // B口以上に拡張と問題にはあるが、すでに1口はあるので、B-1口増やしたいという問題で考える。
        // 電源タップを1つ使うと、1つの口がA個に増える。
        // つまり、1つ使うと、A-1個だけ口が増える。
        // なので、B-1個増やそうとした場合は、(B-1)/(A-1)の切り上げが答えになる。
        // 切り上げする場合は、分子に分母-1を足すことで切り上げが可能。
    }else
    {
        int A, B;
        cin >> A >> B;

        int n = 0;
        if(B <= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            n = (B - A) + (A - 1) - 1;
            n = n / (A - 1) + 1;
            cout << n << endl;
        }
    }
    
    
}
