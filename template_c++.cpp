#include <bits/stdc++.h>
using namespace std;
//-(smallstar))---- :]

#define ll long long
#define ld long double
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define fr(i, n) for (int i = 0, _##i = (n); i < _##i; ++i)
#define fd(i, n) for (int i = (n); --i >= 0;)
#define frr(i, l, r) for (int i = (l), _##i = (r); i < _##i; ++i)
#define fdd(i, l, r) for (int i = (r), _##i = (l); --i >= _##i;)
#define repi(i, a) for (__typeof((a).begin()) i = (a).begin(), _##i = (a).end(); i != _##i; ++i)
#define dwni(i, a) for (__typeof((a).rbegin()) i = (a).rbegin(), _##i = (a).rend(); i != _##i; ++i)
#define pi pair<ll, ll>
#define tii tuple<ll, ll, ll>
#define mp make_pair
#define mt make_tuple
#define fi first
#define se second
#define vi vector<ll>
#define vii vector<ii>
#define eb emplace_back
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define sz(a) (ll)((a).size())
#define filla(a, n, val)       \
    for (ll i = 0; i < n; i++) \
        a[i] = val;
#define all(o) (o).begin(), (o).end()
#define rall(o) (o).rbegin(), (o).rend()
#define bitcount __builtin_popcountll
#define nl cout << "\n"
#define ns cout << " "
#define o2(a, b) cout << a << " " << b
#define o(a) cout << a
#define ppr(a) cout << a.first << " " << a.second
#define debug(a)          \
    cerr << #a << ": ";   \
    for (auto i : a)      \
        cerr << i << " "; \
    cerr << '\n';
#define debugvi(a)                           \
    for (int idx = 0; idx < a.size(); idx++) \
    {                                        \
        cerr << #a << "[" << idx << "]: ";   \
        for (auto i : a[idx])                \
            cerr << i << " ";                \
        cerr << ' ';                         \
        cerr << '\n';                        \
    }
#define debugpp(a)                                         \
    cerr << #a << ": ";                                    \
    for (auto i : a)                                       \
        cerr << "(" << i.first << "," << i.second << ") "; \
    cerr << '\n';
#define EPSILON 1e-9

void takeInput(vi &a, int n)
{
    ll l;
    for (int i = 0; i < n; i++)
    {
        cin >> l;
        a.pb(l);
    }
}

const ll MOD = 1000000007;
const ll LIM = 200005;
const ll BITS = 31;
const ll inf = 1e16;

void solve()
{
    
}

signed main()
{
    fastio;
    int t;
    t = 1;
    cin >> t;
    fr(i, t)
    {
        solve();
    }
}
