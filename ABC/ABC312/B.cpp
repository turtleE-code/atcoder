#include <bits/stdc++.h>
using namespace std;

std::vector<int> find_all(const std::string str, const std::string subStr) {
    std::vector<int> result;

    int subStrSize = subStr.size();
    int pos = str.find(subStr);

    while (pos != std::string::npos) {
        result.push_back(pos);
        pos = str.find(subStr, pos + subStrSize);
    }

    return result;
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<string> s(n);
    for(auto &x : s) 
    { 
        cin >> x; 
    }

    string start = "###.";
    vector<vector<int>> findStart(n, vector<int>(m));
    string end = ".###";
    vector<vector<int>> findEnd(n, vector<int>(m));
    string t = "....";

    vector<vector<bool>> check(n, vector<bool>(m));
    for(int i = 0; i < n; i++)
    {
        findStart.at(i) = find_all(s.at(i), start);
        findEnd.at(i) = find_all(s.at(i), end);
    }

    for(int i = 0; i < n - 6; i++)
    {
        //start find
        for(int k = 0; k <  findStart.at(i).size(); k++)
        {
            bool startFlug1 = false;
            bool startFlug2 = false;
            for(auto &y : findStart.at(i+1))
            {
                if(findStart.at(i).at(k) == y) startFlug1 = true;
            }

            for(auto &z : findStart.at(i+2))
            {
                if(findStart.at(i).at(k) == z) startFlug2 = true;
            }

            if(startFlug1 && startFlug2)
            {
                if(s.at(i + 3).substr(findStart.at(i).at(k), 4) == t){
                    check.at(i).at(findStart.at(i).at(k)) = true;
                }
                
            }
        }
    }

    //end find
    for(int i = 6; i < n - 2; i++)
    {
        for(int k = 0; k <  findEnd.at(i).size(); k++)
        {
            bool endFlug1 = false;
            bool endFlug2 = false;
            for(auto &y : findEnd.at(i+1))
            {
                if(findEnd.at(i).at(k) == y) endFlug1 = true;
            }

            for(auto &z : findEnd.at(i+2))
            {
                if(findEnd.at(i).at(k) == z) endFlug2 = true;
            }

            if(endFlug1 && endFlug2)
            {
                if(s.at(i - 1).substr(findEnd.at(i).at(k), 4) == "....")
                {
                    check.at(i).at(findEnd.at(i).at(k)) = true;
                }
            }
        }
    }

    for(int i = 0; i < n - 8; i++)
    {
        for (int k = 0; k < m - 8; k++)
        {
            if(check.at(i).at(k) == true)
            {
                if(check.at(i + 6).at(k + 5) == true)
                {
                    cout << i+1 << " " << k+1 << endl;
                }
            }
        }
    }
}