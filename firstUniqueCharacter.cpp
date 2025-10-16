#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    string s;
    cin >> s;

    unordered_map<char, int> m;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }

    char target;

    for (auto a : m)
    {
    	cout << a.first << " " << a.second << endl;
        if (a.second == 1)
        {
            target = a.first;
            // break;
        }
    }

    int result = -1;
    for (int i = 0; i < n; i++)
        {
            if (s[i]==target)
            {
                result = i;
                break;
            }
        }
    // cout << target << endl;
    cout << result;

    return 0;
}