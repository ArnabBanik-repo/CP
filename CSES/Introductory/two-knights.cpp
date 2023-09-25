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
    int k; scanf("%d", &k);
    for(int i = 1; i <= k; ++ i){
        if(i == 1) {
            printf("0\n");
            continue;
        }
        ll a = 1ll * i*i * (i*i - 1) / 2;
        ll b = 4ll * (i - 1) * (i - 2);
        printf("%lld\n", (a - b));
    }
    printf("\n");
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    int tc = 1;
//	  cin >> tc;
//    cout << "\n";
    for(int t = 1; t <= tc; ++ t) {
#ifdef ONPC
        cout << "Test Case " << t << ": \n";
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
