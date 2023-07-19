#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, A, B;
    string aff;
    char abc;
    int count = 0;
    int bCount = 0;

    cin >> N >> A >> B;
    cin >> aff;

    vector<string> result;

    for(int i; i < N; i++)
    {
        abc = aff[i];
        if(abc == 'a' && count < A + B)
        {
            result.push_back("Yes");
            count++;
        }
        else if(abc == 'b' && bCount < B && count < A + B)
        {
            result.push_back("Yes");
            bCount++;
            count++;
        }
        else
        {
            result.push_back("No");
        }
    }

    for(string x : result)
    {
        cout << x << endl;
    }
   
}