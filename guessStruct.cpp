#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    stack<int> st;
    queue<int> qq;
    priority_queue<int> pq;
    bool is_stack; bool is_queue; bool is_pq;
    while (cin>>n){

        is_stack = true;
		is_queue = true;
		is_pq = true;
		
        for (int i=0;i<n;i++){
            int op, val;
            cin>>op>>val;
            if (op == 1){
                st.push(val);
                qq.push(val);
                pq.push(val);
            } else {
				
                if (st.empty()) is_stack = false;
                if (pq.empty()) is_pq = false;
                if (qq.empty()) is_queue = false;
                
                else {
                    if (st.top() != val){
                        is_stack = false;
                    }
                    if (qq.front() != val){
						is_queue = false;
						}
						if (pq.top() != val){
						is_pq = false;
						}
					pq.pop();
					qq.pop();
                    st.pop();
                }
            }
        }

        if (is_stack) cout<<"stack\n";
        if (is_queue) cout << "queue\n";
        if (is_pq) cout << "priority queue\n";
        else cout<<"not sure\n";

        while (!st.empty()) st.pop();
        while (!pq.empty()) pq.pop();
        while (!qq.empty()) qq.pop();
    }

    return 0;
}
