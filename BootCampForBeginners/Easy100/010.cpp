#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(auto &x : a){
        cin >> x;
    }

    // 降順
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    int Alice = 0;
    int Bob = 0;
    int i = 0;

    for(auto &x : a){
        if(i % 2 == 0){
            Alice += x;
        }else{
            Bob += x;
        }
        i++;
    }

    // cout << Alice << endl;
    // cout << Bob << endl;

    cout << Alice - Bob << endl;

}