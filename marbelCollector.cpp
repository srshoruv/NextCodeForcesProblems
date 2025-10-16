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

        int n,m;
        cin >> n >> m;

        set<int> s;

        for (int i = 0; i < n; i++)
        {
        	int x;
        	cin >> x;
        	s.insert(x);
        }

        cout << m - s.size() << endl;

    }

    return 0;
}