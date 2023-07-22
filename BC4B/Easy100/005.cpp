#include <bits/stdc++.h>
using namespace std;

int main() {
    //20min
    int N, M, C;
    int sum = 0;
    int count = 0;

    cin >> N >> M >> C;

    int B[M]; 
    int A[M];

    for(int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    for(int i = 0; i < N; i++)
    {
        sum = 0;
        for(int j = 0; j < M; j++)
        {
            cin >> A[j];
            sum += A[j] * B[j];
        }
        sum += C;
        
        if(sum > 0)
        {
            count++;
        }
    }

    cout << count << endl;
}