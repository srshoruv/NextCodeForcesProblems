#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n;
    cin >> n;

    vector<int> vec(n);

    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }

    int g = vec[0];

    for (int i = 0; i < n; i++)
    {

       g = gcd(g,vec[i]); 
    }

    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] == g)
        {
            found = true;
            break;
        }
    }

    if (found) cout << g << endl;
    else cout << -1 << endl;

    return 0;
}