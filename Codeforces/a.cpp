#ifdef ONPC
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#include<bits/stdc++.h>
using namespace std;

template<typename A, typename B> ostream& operator<<(ostream &os, const pair<A, B> &p) { return os << '(' << p.first << ", " << p.second << ')'; }
template < typename T_container, typename T = typename enable_if < !is_same<T_container, string>::value, typename T_container::value_type >::type > ostream & operator<<(ostream &os, const T_container &v) { os << '{'; string sep; for (const T &x : v) os << sep << x, sep = ", "; return os << '}'; }
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail> void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }

#define ll long long
#define endl '\n'

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

void solve() {
    int n; cin >> n;
    int m; cin >> m;
    double target = 1.0 * n / m;
    
    if(target == (int)target){
        cout << 0 << "\n";
        return;
    }

    ll res = 0;
    double c = n;
    int d = 1;
    while(c != target){
        if(c == (int)c) ++ res;
        else res += 2 * d;
        c /= 2;
        ++ d;
    }

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    int tc = 1;
	cin >> tc;
    for(int t = 1; t <= tc; ++ t) {
#ifdef ONPC
        cout << "Case #" << t << ": \n";
#endif
        solve();
#ifdef ONPC
        cout << "++++++++++++++++++++++++++++++++++" << endl;
#endif
    }
#ifdef ONPC
    cerr << endl << "Finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
