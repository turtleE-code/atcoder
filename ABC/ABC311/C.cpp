#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> children(N + 1);
    for(int i = 1; i <= N; i++){
        cin >> children.at(i);
        // cout << atNode[i] << endl;
    }

    vector<bool> flag(N + 1);
    vector<int> visited;
    int now = 1;

    while(flag.at(now) == false){
        flag.at(now) = true;
        visited.push_back(now);
        now = children.at(now);
    }
    // visited 1 3 4 7 8 2 loop 7 8 2 now=7

    vector<int> ans;
    for(auto x : visited){
        if(x == now) now = 0;
        if(now == 0) ans.push_back(x);
    }

    cout << ans.size() << endl;

    for(int i = 0; i < ans.size(); i++){
        cout << ans.at(i);
        if(i == ans.size() - 1){
            cout << endl;
        }else{
            cout << " ";
        }
    }

    // bool check[N] = {false};
    // int now = 0;
    // vector<int> v;
    // bool loop = false;

    // for(int i = 0; i < N; i++){
    //     loop = false;
    //     //check[i] = true;
    //     now = i;
    //     for(int j = 0; j < N + 1; j++){
    //         // if(check[atNode[now]] == false){
    //         if(check[i] == false){
    //             check[atNode[now]] = true;
    //             v.push_back(atNode[now]);
    //         }else{
    //             loop = true;
    //             break;
    //         }
            
    //         now = atNode[now];
    //     }
    //     if(loop == true){
    //         break;
    //     }

    //     for (int k = 0; k < N; k++) {
    //         check[k] = false;
    //     }
    //     v.clear();
    // }

    // cout << v.size() << endl;

    // for (int i = 0; i < v.size(); i++) {
    //     if(i != v.size() - 1){
    //         cout << v.at(i) + 1 << " ";
    //     }else{
    //         cout << v.at(i) + 1 << endl;;
    //     }
    // }
    // cout << v.at(0) << endl;
}