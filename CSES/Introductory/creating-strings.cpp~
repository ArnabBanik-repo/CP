#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

vector<string> res;
string s;
unordered_set<string> v;

void bt(int i, char* curr, unordered_set<int>& st){
	if(i == s.length()){
		string t = curr;
		if(v.find(t) != v.end()) return;
		res.emplace_back(t);
		v.insert(t);
		return;
	}
	int l = s.length();
	for(int j = 0; j < l; ++ j){
		if(st.find(j) != st.end()) continue;
		curr[i] = s[j];
		st.insert(j);
		bt(i + 1, curr, st);
		st.erase(j);
	}
}

void solve(){
	cin >> s;
	int n = s.length();
	char a[n + 1];
	a[n] = '\0';
	unordered_set<int> st;
	sort(s.begin(), s.end());
	bt(0, a, st);
	cout << res.size() << "\n";
	for(auto c : res)
		cout << c << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#ifdef ONPC
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
	int t = 1;
	//cin >> t;
	while(-- t >= 0){
		solve();
#ifdef ONPC
		cout << "----------------------\n";
#endif
	}
}
