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

string res;

void bt(string s, int i, string curr, unordered_set<char>& st){
    if(i == (int)s.length()){
        if(curr.length() == 0) return;
        if(res.length() == 0) {
            res = curr;
            return;
        }
        res = curr.length() > res.length() || curr.compare(res) < 0 ? curr : res;
        return;
    }
    
    bt(s, i + 1, curr, st);
    if(st.find(s[i]) != st.end()) return;
    curr.push_back(s[i]);
    st.insert(s[i]);
    bt(s, i + 1, curr, st);
    st.erase(s[i]);
    curr.erase(curr.length() - 1);
}

void solve() {
    string s; cin >> s;
    unordered_set<char> st;
    string curr = "";
    bt(s, 0, curr, st);
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    int tc = 1;
	cin >> tc;
    cout << endl;
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
