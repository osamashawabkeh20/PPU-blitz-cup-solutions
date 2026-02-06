/*
      problem link: https://codeforces.com/contest/2185/problem/D
*/

#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n, m, h;
    cin >> n >> m >> h;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> reset(n), add(n);
    int cur = 1;
    for (int i = 0; i < m; i++) {
        int b, c; cin >> b >> c;
        if (reset[b - 1] != cur) {
            reset[b - 1] = cur;
            add[b - 1] = 0;
        }
        add[b - 1] += c;
        if (add[b - 1] + a[b - 1] > h) {
            cur++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (reset[i] == cur) a[i] += add[i];
        cout << a[i] << " ";
    }
    cout << endl;
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
    cin >> t;
    while (t--)
        Solve();

    cerr << "Done!" << endl;

    return 0;
}
