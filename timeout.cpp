#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n, s;
    cin >> n >> s;
    vector<int> v(n+1);

    v[0] = 0;

    for (int i=1; i<=n; i++)
    {
    	cin >> v[i];
    }

    // cout << s << endl;

    for (int i=0; i<n; i++)
    {
    	// cout << v[i+1] - v[i] << endl;
    	if (v[i+1]-v[i] > s)
    	{
    		cout << "No\n";
    		return 0;
    	}

    }

    cout << "Yes\n";


    return 0;
}