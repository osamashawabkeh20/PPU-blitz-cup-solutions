/*
      problem link: https://codeforces.com/contest/1185/problem/B
*/
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    string a, b;
    cin >> a >> b;
    int n = size(a);
    vector<int> cnta, cntb;
    string abs1 = "", abs2 = "";
    for (int i = 0; i < n; i++) {
        int j = i, ctr = 0;
        while (j < n and a[j] == a[i]) {
            j++; ctr++;
        }
        abs1 += a[i];
        cnta.push_back(ctr);
        i = j - 1;
    }
    n = size(b);
    for (int i = 0; i < n; i++) {
        int j = i, ctr = 0;
        while (j < n and b[j] == b[i]) {
            j++; ctr++;
        }
        abs2 += b[i];
        cntb.push_back(ctr);
        i = j - 1;
    }
    if (abs1 != abs2) {
        return void (cout << "NO" << endl);
    }
    for (int i = 0; i < size(cnta); i++) {
        if (cnta[i] > cntb[i]) {
            return void (cout << "NO" << endl);
        }
    }
    cout << "YES" << endl;
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
