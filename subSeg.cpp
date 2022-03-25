#include <bits/stdc++.h>
using namespace std;

int suma(int i, int j, vector<int> lista){
	int s=0;
	for(int k = i; k<=j; k++){
		s+=lista[k];
		}
	return s;
	}

int isValid(int a, int b, int c, vector<int> lista, int largo){
	//(a+b+c == largo) &&
	return suma(0,a,lista) == suma(a+b,largo-1,lista);
	}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int n; cin >> n;
	vector<int> lista(n);
	vector<int> lista_a;
	for(int i = 0; i<n; i++){ // paso los valores a la lista
		cin >> lista[i];
		}
	/* luego la idea es que si es que tomemos todos los valores
	 * y si es valido, entonces los comparemos y nos quedemos con el
	 * maximo!*/
	int max = -1;
	for(int a = 0; a<n; a++){
		for(int b = 0; b<(n-a); b++){
			if(isValid(a,b,n-a-b,lista,n)){
					if(a>max) max = a;
						
				}	
			}
		}
	cout << suma(0,max,lista) << endl;
	return 0;
}
