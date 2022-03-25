#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
	ll n; ll k;
	cin >> n; cin >> k;
	if (n>2){
		queue <ll> fila;
		map <ll, ll> ganados;
		
		for(ll i = 0; i<n; i++){
			ll jg;
			cin >> jg;
			fila.push(jg);
			ganados[jg] = 0;
			}
		ll jg1 = fila.front();
		fila.pop();
		while(ganados[jg1]<k){
			ll jg2 = fila.front();
			fila.pop();
			
			if (jg2<jg1){
				fila.push(jg2);
				ganados[jg1]++;
				}
				
			else{
				fila.push(jg1);
				ganados[jg2]++;
				jg1 = jg2;
				}
			}
		cout << jg1 << endl;
			}
	else{
		ll jg1; ll jg2;
		cin >> jg1; cin >> jg2;
		if(jg1 > jg2) cout << jg1 << endl;
		else cout << jg2 << endl;
		}
	return 0;
	}
