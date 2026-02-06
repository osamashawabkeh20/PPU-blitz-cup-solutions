/* 
      problem link: https://codeforces.com/contest/701/problem/B
*/
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n, k;
    cin >> n >> k;
    int X = n, Y = n;
    set<int> row, col;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        if (row.find(x) == row.end()) {
            X--;
            row.insert(x);
        }
        if (col.find(y) == col.end()) {
            Y--;
            col.insert(y);
        }
        cout << X * Y << " ";
    }
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
