#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007
 
using namespace std;
 
void solve(){
	int a; cin >> a;
	int b; cin >> b;
	if(a<b)swap(a,b);
	if(a>2*b){
		cout<<"NO\n";
	}else{
		a%=3,b%=3;
		if(a<b)swap(a,b);
		if((a==2 && b==1) || (a==b && b==0)){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}
 
int main(){
#ifdef ONPC
	freopen("inputf.in", "r", stdin);
#endif
	int t = 1;
	cin >> t;
	while(-- t >= 0){
		solve();
	}
}
