/* 
      problem link: https://codeforces.com/contest/1043/problem/A
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
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    int mx = *max_element(a.begin(), a.end());
    for (int k = mx; k <= 1000; k++) {
        int cur = 0;
        for (int i = 0; i < n; i++) {
            cur += k - a[i];
        }
        if (cur > sum) {
            return void (cout << k << endl);
        }
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
