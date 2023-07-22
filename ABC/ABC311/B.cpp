#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, day;
    int count = 0;
    int count_tmp = 0;
    int count_max = 0;
    cin >> N >> day;

    string s[N];
    for(int i = 0; i < N; i++){
        cin >> s[i];
        // cout << s[i] << endl;
    }

    for(int i = 0; i < day; i++){
        count_tmp = 0;
        for(int j = 0; j < N; j++){
            if(s[j][i] == 'o'){
                count_tmp++;
            }
        }
        if(count_tmp == N){
            count++;
            if(count_max < count){
                count_max = count;
            }
        }else{
            count = 0;
        }
    }

    cout << count_max << endl;

}