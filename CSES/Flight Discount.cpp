//HELLGOD//
//Aham Brahmasmi//
#include <bits/stdc++.h>
// #include <regex>
using namespace std;
#define ll            long long int
#define F              first
#define S              second
#define pb             push_back
#define si             set <int>
#define vi             vector <int>
#define pii            pair <int, int>
#define vpi            vector <pii>
#define vpp            vector <pair<int, pii>>
#define mii            map <int, int>
#define mpi            map <pii, int>
#define spi            set <pii>
#define nl             "\n"
#define len(x) ((ll)((x).size()))
#define sz(x)          ((int) x.size())
#define all(p)         p.begin(), p.end()
// #define double         long double
#define que_max        priority_queue <int>
#define que_min        priority_queue <int, vi, greater<int>>
#define bug(...)       __f (#__VA_ARGS__, __VA_ARGS__)
#define print(a)       for(auto x : a) cout << x << " "; cout << endl
#define print1(a)      for(auto x : a) cout << x.F << " " << x.S << endl
#define print2(a,x,y)  for(int i = x; i < y; i++) cout<< a[i]<< " "; cout << endl
#define mod 1000000007
// typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll gcd(ll a, ll b) { if (a == 0ll) { return b;} return gcd(b % a, a);}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " -> "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
inline int power(int a, int b) {int x = 1; while (b) {if (b & 1) x *= a; a *= a; b >>= 1;} return x;}
const ll inf = 10000000000000000LL;
#define int long long
void diqqq(int start, vector<pair<int, int>>adj[], vector<int>&dist, int n) {
    priority_queue<pair<int, int>>pq;
    pq.push({0, start});
    dist[start] = 0;
    vector<int>vis(n + 1, 0);

    while (pq.size()) {
        auto ele = pq.top();
        pq.pop();
        int node = ele.second;
        if (vis[node])continue;
        vis[node] = 1;
        int curr = dist[node];
        for (auto it : adj[node]) {
            int to = it.first;
            int dic = it.second;
            if (dist[to] > curr + dic) {
                dist[to] = curr + dic;
                pq.push({ -dist[to], to});
            }
        }

    }

}



void solve() {
    int a, b;
    cin >> a >> b;
    vector<pair<int, int>>adj1[a + 1], adj2[a + 1];
    vector<pair<int, pair<int, int>>>vec;
    for (int i = 0; i < b; i++) {
        int x, y, w;
        cin >> x >> y >> w;
        vec.pb({x, {y, w}});
        adj1[x].pb({y, w});
        adj2[y].pb({x, w});


    }
    vector<int>dist1(a + 1, inf), dist2(a + 1, inf);
    diqqq(1, adj1, dist1, a);
    diqqq(a, adj2, dist2, a);
    // debug(dist1);
    int ans = inf;
    for (auto it : vec) {
        int n = it.first;
        int m = it.second.first;
        int o = it.second.second;
        ans = min(ans, dist1[n] + dist2[m] + o / 2);
    }
    cout << ans << nl;




}




signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


    // #ifndef ONLINE_JUDGE
    //  freopen("input.txt",  "r",  stdin);
    //  freopen("output.txt", "w", stdout);
    // #endif
    // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    clock_t z = clock();

    int t = 1;
    // cin >> t;
    while (t--) solve();

    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

    // return 0;
}
