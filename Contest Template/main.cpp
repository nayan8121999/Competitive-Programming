#include<bits/stdc++.h>

/*
     ██  █████  ██     ███████ ██   ██ ██████  ██     ██████   █████  ███    ███ 
     ██ ██   ██ ██     ██      ██   ██ ██   ██ ██     ██   ██ ██   ██ ████  ████ 
     ██ ███████ ██     ███████ ███████ ██████  ██     ██████  ███████ ██ ████ ██ 
██   ██ ██   ██ ██          ██ ██   ██ ██   ██ ██     ██   ██ ██   ██ ██  ██  ██ 
 █████  ██   ██ ██     ███████ ██   ██ ██   ██ ██     ██   ██ ██   ██ ██      ██ 
                                                                                 
*/                                                                           

using namespace std;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
// #define INF 1e18
#define nline "\n"
#define pb push_back
#define pf push_front
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define SORT(container) std::sort(container.begin(), container.end())
#define SORT_REV(container) std::sort(container.rbegin(), container.rend())

const int MAX_N = 2e5 + 1;
const int INF = 1e9;

#define FOR(i,s,e) for(long long int i=s;i<e;i++)
#define CFOR(i,s,e) for(long long int i=s;i<=e;i++)
#define RFOR(i,e,s) for(long long int i=e-1;i>=s;i--)

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
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

using namespace std;

void solve() {

}

int main() {
    int t;
    cin >> t;
    // t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
