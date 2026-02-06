/* 
    problem link: https://codeforces.com/contest/864/problem/A
*/

// we can solve it in may different ways. 

#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n; cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m[x]++;
    }
    if (size(m) == 2 and m.begin()->second == next(m.begin())->second) {
        cout << "YES" << endl;
        cout << m.begin()->first << " " << next(m.begin())->first << endl;
    }
    else cout << "NO" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;
    while (t--)
        Solve();

    cerr << "Done!" << endl;

    return 0;
}
