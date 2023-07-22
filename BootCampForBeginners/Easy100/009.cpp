#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;

    vector<int> place(n);
    for(auto &x : place){
        cin >> x;
    }

    int min = 0;
    for(auto x : place){
        min += std::min(2*x, 2*abs(x - k));
    }

    cout << min << endl;
}