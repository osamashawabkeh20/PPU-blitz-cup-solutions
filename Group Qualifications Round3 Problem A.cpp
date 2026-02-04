/*
      problem link: https://codeforces.com/contest/1666/problem/D
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
    map<char, int> remove;
    for (int i = 0; i < size(a); i++) {
        remove[a[i]]++;
    }
    for (int i = 0; i < size(b); i++) {
        remove[b[i]]--;
    }
    for (int i = 0; i < size(a); i++) {
        if (remove[a[i]] < 0) {
            return void (cout << "NO" << endl);
        }
    }
    string t = "";
    for (int i = 0; i < size(a); i++) {
        if (remove[a[i]] == 0) {
            t.push_back(a[i]);
        }
        else remove[a[i]]--;
    }
    cout << (t == b ? "YES" : "NO") << endl;
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
