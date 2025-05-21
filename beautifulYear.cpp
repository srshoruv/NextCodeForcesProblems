#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int year;
    cin >> year;
    bool beautiful = false;
    int temp = ++year;

    while (!beautiful)
    {
    	year = temp;
    	unordered_set<int> s;
	    s.insert(year%10);
	    year /= 10;
	    s.insert(year%10);
	    year /= 10;
	    s.insert(year%10);
	    year /= 10;
	    s.insert(year%10);

	    if (s.size() == 4)
	    {
	    	cout << temp;
	    	beautiful = true;
	    }
	    else
	    {
	    	temp++;
	    }

		// cout << s.size() << endl;
	    
	    s.clear();
    }

    


    
    
    return 0;
}