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

    for (int i = 0; i < n; i++)
    {
    	cout << vec[i] << " ";
    }
    
    return 0;
}