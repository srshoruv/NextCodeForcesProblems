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

        // Your code here
        int a,b;
        cin >> a >> b;

        if (a == 0 && b != 0) cout << "No\n";
        else if (b == 0 && a != 0) cout << "Yes\n";

        else if (a > b) cout << "No\n";
        else cout << "Yes\n";

    }

    return 0;
}