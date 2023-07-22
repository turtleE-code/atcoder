#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int atNode[N];
    for(int i = 0; i < N; i++){
        cin >> atNode[i];
        atNode[i]--;
        // cout << atNode[i] << endl;
    }

    bool check[N] = {false};
    int now = 0;
    vector<int> v;
    bool loop = false;

    for(int i = 0; i < N; i++){
        loop = false;
        //check[i] = true;
        now = i;
        for(int j = 0; j < N + 1; j++){
            // if(check[atNode[now]] == false){
            if(check[i] == false){
                check[atNode[now]] = true;
                v.push_back(atNode[now]);
            }else{
                loop = true;
                break;
            }
            
            now = atNode[now];
        }
        if(loop == true){
            break;
        }

        for (int k = 0; k < N; k++) {
            check[k] = false;
        }
        v.clear();
    }

    cout << v.size() << endl;

    for (int i = 0; i < v.size(); i++) {
        if(i != v.size() - 1){
            cout << v.at(i) + 1 << " ";
        }else{
            cout << v.at(i) + 1 << endl;;
        }
    }
    // cout << v.at(0) << endl;
}