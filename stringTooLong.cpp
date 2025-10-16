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

    char c;
    int l;
    int len = 0;
    string s;

    while (n--) 
    {

        cin >> c >> l;
        len += l;

        if ( len <= 100)
        {
        	while (l--)
        {
        	s.push_back(c);
        }

        }
        else

        {
        	s = "Too Long\n";
            break;
        }
        


    }

    cout << s << endl;

    return 0;
}