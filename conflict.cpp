#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n;
    cin >> n;

    string s1 , s2;
    cin >> s1 >> s2;

    for (int i = 0; i < n ; i++)
    {
    	if ( s1[i] == 'o' && s2[i] == 'o')
    	{
    		cout << "Yes\n";
    		return 0;
    	}
    }

    cout << "No\n";

    

    return 0;
}