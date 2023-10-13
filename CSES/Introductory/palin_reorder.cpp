#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
 
using namespace std;
 
void solve(){
	string s; cin >> s;
	int l = s.length();
	int f[26] = {0};
	for(int i = 0; i < l; ++ i)
		++ f[s[i] - 'A'];
	int x = -1;
	for(int i = 0; i < 26; ++ i){
		if(!(f[i] & 1)) continue;
		if(x != -1){
			cout << "NO SOLUTION\n";
			return;
		}
		x = i;
	}
	char res[l + 1];
	int k = 0;
	for(int i = 0; i < 26; ++ i){
		if(i == x) continue;
		for(int j = 0; j < f[i] / 2; ++ j)
			res[k ++] = (char)(i + 'A');
	}
	if(x != -1)
		for(int i = 0; i < f[x]; ++ i)
			res[k ++] = (char)(x + 'A');
	for(int i = 25; i >= 0; -- i){
		if(i == x) continue;
		for(int j = 0; j < f[i] / 2; ++ j)
			res[k ++] = (char)(i + 'A');
	}
	res[k] = '\0';
	cout << res << "\n";
}
 
int main(){
#ifdef ONPC
	freopen("inputf.in", "r", stdin);
	freopen("outputf.in", "w", stdout);
#endif
	int t = 1;
	//cin >> t;
	while(-- t >= 0){
		solve();
	}
}
