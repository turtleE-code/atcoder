#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    int min = INFINITY;
    int sum;
    
    vector<int> coordinate(N);
    
    for(int i = 0; i < N; i++)
    {
        cin >> coordinate.at(i);
    }

    for(int p = 1; p <= 100; p++)
    {
        sum = 0;

        for(int i = 0; i < coordinate.size(); i++)
        {
            sum += pow(coordinate.at(i) - p, 2);
        }

        if(min > sum)
        {
            min = sum;
        }
    }

    cout << min << endl;
}