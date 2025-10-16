#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    vector<int> v = {3, 3, 3, 3};
    int n = v.size();


    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[v[i]]++;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (m.find(i)== m.end())
        {
        	cout << 0 << " ";
        }
        else
        {
        	cout << m[i] << " ";
        }
    }

    return 0;
}