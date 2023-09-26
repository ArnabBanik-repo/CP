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
// #define endl '\n'

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

vector<int> res;
int sz = 10000000;

/*
    Sample Test Case:
    =================
    2
    6
    algorithms math java reactjs csharp aws
    6
    3 algorithms math java
    3 algorithms math reactjs
    3 java csharp aws
    2 reactjs csharp
    2 csharp math
    2 aws java
    3
    java nodejs reactjs
    3
    1 java
    1 nodejs
    2 nodejs reactjs
*/

void bt(vector<int>& p, int i, int r, vector<int>& curr){
    if(r == 0){
        if((int)curr.size() < sz){
            sz = curr.size();
            res = curr; 
        }
        return;
    }
    if(i == (int)p.size()) return;

    bt(p, i + 1, r, curr);
    curr.emplace_back(i);
    bt(p, i + 1, r & ~p[i], curr);
    curr.erase(curr.begin() + curr.size() - 1);
}

void solve() {
    int n; cin >> n;
    vector<string> req_skills(n);
    unordered_map<string, int> map;
    unordered_set<string> all_skills;

    for(int i = 0; i < n; ++ i) cin >> req_skills[i];
    cin >> n;
    vector<vector<string>> people(n);
    int x = 0;
    for(int i = 0; i < n; ++ i){
        cin >> x;
        vector<string> t(x);
        for(int j = 0; j < x; ++ j){
            cin >> t[j];
            all_skills.insert(t[j]);
        }
        people[i] = t;
    }

    int a = 0;
    for(string i : all_skills)
        map[i] = a ++;

    int req = 0;
    vector<int> p;

    for(string i : req_skills)
        req |= 1 << map[i];

    for(auto i : people){
        int t = 0;
        for(string j : i)
            t |= 1 << map[j];
        p.emplace_back(t);
    }
   
    vector<int> curr;
    bt(p, 0, req, curr);

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    int tc = 1;
    cin >> tc;
    for(int t = 1; t <= tc; ++ t) {
#ifdef ONPC
        cout << "Test Case " << t << ": \n";
#endif
        sz = 10000000;
        solve();
#ifdef ONPC
        cout << "++++++++++++++++++++++++++++++++++" << endl;
#endif
    }
#ifdef ONPC
    cerr << endl << "Finished in " << clock() * 1.0 / CLOCKS_PER_SEC << " sec" << endl;
#endif
}
