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
#define int long long
 
 
// void solve() {
//     int n, m;
//     cin >> n >> m;
//     vector<pair<int, int>>adj[n + 1];
//     vector<int>indegree(n + 1);
//     for (int i = 0; i < m; i++) {
//         int a, b, c;
//         cin >> a >> b >> c;
//         adj[a].push_back({b, c});
//         indegree[b]++;
//     }
//     queue<int>q;
//     for (int i = 1; i <= n; i++) {
//         if (indegree[i] == 0) {
//             q.push(i);
//         }
//     }
//     set<int>topo;
//     while (!q.empty()) {
//         int node = q.front();
//         q.pop();
//         topo.insert(node);
//         for (auto it : adj[node]) {
//             int to = it.first;
//             indegree[to]--;
//             if (indegree[to] == 0) {
//                 q.push(to);
//             }
//         }
 
//     }
//     if (topo.size() == n) {
//         cout << "NO" << nl;
//         return;
//     } else {
//         vector<int>cycle;
//         for (int i = 1; i <= n; i++) {
//             if (topo.find(i) == topo.end()) {
//                 cycle.push_back(i);
//             }
 
 
//         }
 
//     }
 
// }
bool dfs(int node, vector<int>adj[], vector<int>&vis, int par, vector<int>&path) {
    vis[node] = 1;
 
    for (auto it : adj[node]) {
        path.push_back(it);
 
        if (!vis[it]) {
            if (dfs(it, adj, vis, node, path))return 1;
 
        } else if (it != par)return 1;
        path.pop_back();
 
    }
 
    return 0;
}
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int>adj[n + 1];
    vector<int>indegree(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b ;
        adj[a].push_back(b);
        adj[b].push_back(a);
        indegree[b]++;
        indegree[a]++;
    }
    // queue<int>q;
    // for (int i = 1; i <= n; i++) {
    //     if (indegree[i] == 0) {
    //         q.push(i);
    //     }
    // }
    // set<int>topo;
    // while (!q.empty()) {
    //     int node = q.front();
    //     q.pop();
    //     topo.insert(node);
    //     for (auto it : adj[node]) {
    //         int to = it;
    //         indegree[to]--;
    //         if (indegree[to] == 0) {
    //             q.push(to);
    //         }
    //     }
 
    // }
    // int bro = topo.size();
    // if ( bro == n) {
    //     cout << "IMPOSSIBLE" << nl;
    //     return;
    // } else {
    // vector<int>cycle;
    // for (int i = 1; i <= n; i++) {
    //     if (topo.find(i) == topo.end()) {
    //         cycle.push_back(i);
    //     }
 
 
    // }
    vector<int>vis(n + 1, 0);
 
    vector<int>path;
    for (int i = 1; i <= n; i++) {
        int it = i;
 
        path.pb(it);
 
 
 
        if (!vis[it] and dfs(it, adj, vis, 0, path)) {
 
            vi ans = {*path.rbegin()};
            for (auto j = path.rbegin() + 1; j != path.rend(); j++) {
                ans.pb(*j);
                if (*j == *path.rbegin()) break;
            }
 
 
 
            cout << ans.size() << nl;
            for (auto it : ans) {
                cout << it << ' ';
            }
            cout << nl;
            return;
        }
        path.pop_back();
 
    }
    cout << "IMPOSSIBLE" << nl;
 
 
 
    // }
 
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
