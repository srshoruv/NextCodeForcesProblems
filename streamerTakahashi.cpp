#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n, l, r;
    cin >> n >> l >> r;

    int count = 0;

    while (n--)
    {
    	int x, y;
    	cin >> x >> y;

    	if ( x <= l && y >= r) count++;
    }
    cout << count << endl;

    return 0;
}