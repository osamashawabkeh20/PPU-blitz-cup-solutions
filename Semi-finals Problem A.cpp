/* 
      problem link: https://codeforces.com/contest/1427/problem/A
*/

// i have two solutions for this problem

// solution 1: 
#include <bits/stdc++.h>

#define endl '\n'
#define int long long
const int inf = 3e18;

using namespace std;

void Solve()
{
    int n; cin >> n;
    vector<int> zero, negative, positive;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
        if (x == 0) zero.push_back(x);
        if (x < 0) negative.push_back(x);
        if (x > 0) positive.push_back(x);
    }
    if (sum == 0) {
        cout << "NO" << endl;
    }
    else if (sum > 0) {
        cout << "YES" << endl;
        for (int i = 0; i < size(positive); i++) {
            cout << positive[i] << " ";
        }
        for (int i = 0; i < size(negative); i++) {
            cout << negative[i] << " ";
        }
        for (int i = 0; i < size(zero); i++) {
            cout << zero[i] << " ";
        }
        cout << endl;
    }
    else if (sum < 0) {
        cout << "YES" << endl;
        for (int i = 0; i < size(negative); i++) {
            cout << negative[i] << " ";
        }
        for (int i = 0; i < size(positive); i++) {
            cout << positive[i] << " ";
        }
        for (int i = 0; i < size(zero); i++) {
            cout << zero[i] << " ";
        }
        cout << endl;
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
    cin >> t;
    while (t--)
        Solve();

    cerr << "Done!" << endl;

    return 0;
}

// solution 2: 
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
    for (int t = 0; t < 500; t++) {
        int cur = 0;
        bool valid = true;
        for (int i = 0; i < n; i++) {
            cur += a[i];
            if (cur == 0) {
                valid = false;
                break;
            }
        }
        if (valid) {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
            return;
        }
        random_shuffle(a.begin(), a.end());
    }
    cout << "NO" << endl;
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
