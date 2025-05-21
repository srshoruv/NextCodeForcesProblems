#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    set<int> s;
    for (int i = 0; i < 4; i++)
    {
    	int x;
    	cin >> x;
    	s.insert(x);
    }

    cout << 4 - s.size() << endl;


    return 0;
}