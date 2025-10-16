#include <iostream>
#include <set>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int n;
    cin >> n;
    set<int> s;

    for (int i=0; i < n; i++)
    {
    	int x;
    	cin >> x;
    	s.insert(x);
    }

    cout << s.size() << endl;
    for (int a : s)
    {
    	cout << a << " ";
    }


    return 0;
}