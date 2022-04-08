#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<vector<ll>> graph;

int main(){
	int n; cin >> n;
	graph grafo(n+1);
	vector<int> revelao(n+1)
	for(int i = 1; i<n+1; i++){
		int p,c;
		cin >> p >> c;
		revelao[i]=c
		if (p == -1){
			continue;
			}
			
		else{
			grafo[p].push_back(i);
		}
	}
	
	for(int i = 1; i<n+1; i++){
		if (revelao[i]){
			int sonRev = 1
			for(int v: grafo[i]){
					sonrev = sonrev && revelao[v] 	
					}
				if (sonrev){
						cout << i << endl;
						
					}
				}
			}
		}
}
