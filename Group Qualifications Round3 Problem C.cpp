/*
      problem link: https://codeforces.com/contest/1197/problem/B
*/
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int mx = max_element(a.begin(), a.end()) - a.begin();
    if (!is_sorted(a.begin(), a.begin() + mx)) {
        return void (cout << "NO" << endl);
    }

    reverse(a.begin(), a.end());
    mx = max_element(a.begin(), a.end()) - a.begin();
    if (!is_sorted(a.begin(), a.begin() + mx)) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
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
