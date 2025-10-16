#include "bits/stdc++.h"
//#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);

int main()
{
  int n, m;
  cin >> n >> m;
  
  int total = 0;
  
  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    total += x;
  }
  
  if (total <= m) cout << "Yes\n";
  else cout << "No\n";
}
