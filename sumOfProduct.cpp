#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    ll n, sum = 0;
    cin >> n;

    vector<int> vec(n);

    for (ll i = 0; i < n; i++)
    {
    	cin >> vec[i];
    }

    for (ll i = 0, j = i+1; j < n; i++, j++)
    {
 
    	sum += vec[i] * vec[j];    	
    
	} 

	cout << sum << endl;


    return 0;
}