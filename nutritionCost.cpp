#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int testCase;
    cin >> testCase;

    while (testCase--) 
    {

        int n, c;
        cin >> n >> c;

        vector<int> a(n);
        vector<int> b(n);


        for (int i = 0; i < n; i++)
        {
        	cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }


        unordered_map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            if (m.find(a[i])== m.end())
            {
                m[a[i]]= b[i];
            }
            else
            {
                m[a[i]] = min(m[a[i]],b[i]);
            }
        }

        int totalCost = 0;
        int maxCost = 0;

        vector<int> v;

        for (auto& cost: m)
        {
            v.push_back(cost.second);
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < v.size(); i++)
        {
            totalCost += v[i];
            int value = c * (i+1) - totalCost;
            maxCost = max(maxCost, value);
        }

        cout << maxCost << endl;
     

    }

    return 0;
}