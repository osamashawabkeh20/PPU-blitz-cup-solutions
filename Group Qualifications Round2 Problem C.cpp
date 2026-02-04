/*
      problem link: https://codeforces.com/contest/1054/problem/B
*/
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n; cin >> n;
    int mex = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x == mex) mex++;
        else if (x > mex) {
            return void (cout << i + 1 << endl);
        }
    }
    cout << -1 << endl;
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
