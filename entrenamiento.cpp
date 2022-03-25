#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
/* la idea del problemma es que:
 * si yo tengo un pool de 4 problemas, los cuales son  1 1 3 4
 * entonces yo escogeria de la siguiente manera
 * dia 1: escojo 1 pues es el minimo y despues lo DESCARTO
 * dia 2: escjo 3 pues es el minimo, cumple que 2<3 y lo DESCARTO
 * dia 3: escojo 4 pues es el minimo, cumple que 3<4 y lo DESCARTO*/
ll minimo(multiset mset){
	
	}

int main(){
	ll n;
	cin >> n;
	multiset <ll> cantidadComp;
	ll max = -1;
	while(n){
		ll competencia;
		cin >> competencia;
		if (-competencia > max){
			max = -competencia;
			}
		cantidadComp.insert(competencia);
		n--;
		}
	ll min = -max;
	ll dia = 1;
	//ahora implementemos la eleccion de weas
	while(1){
		if(minimo(cantidadComp) dia){break;}
		else{}
		}
	cout << dia << endl;
	return 0;
	}
