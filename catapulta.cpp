#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll n; ll t;
    cin >> n >> t;
    vector <ll> potencia(n+1,0);
    for(ll i = 1; i<n; i++){
        cin >> potencia[i];
    }
    ll k = 1;
    while(k<=t){
        if (k == t){
            cout << "YES" << endl;
            return 0;
        }
        k+=potencia[k];
    }
    cout << "NO" << endl;
    return 0;
}
