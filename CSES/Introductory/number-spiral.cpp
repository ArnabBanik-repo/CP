#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
    int t; cin >> t;
    while(--t >= 0){
        ll r, c; cin >> r; cin >> c;
        if((c & 1 && c >= r) || (!(r & 1) && r >= c))
            cout << max(r, c) * max(r, c) - min(r, c) + 1 << "\n";
        else {
            if(r < c) cout << c * (c - 2) + 1 + r << "\n";
            else cout << (r - 1) * (r - 1) + c << "\n";
        }
    }
}
