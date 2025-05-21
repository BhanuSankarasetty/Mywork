#include <iostream>
#include <unordered_set>
#include <queue>
using namespace std;
void solve(){
    int t,n1,n2;
    cin>>t>>n1>>n2;
    unordered_set<int>st;
    queue<int>q;
    q.push(t);
    st.insert(t);
    int c = 0;
    while(!q.empty()){
        auto temp = q.front();
        q.pop();
        if(temp - n1 > 0 && st.find(temp - n1) == st.end()){
            q.push(temp-n1);
            st.insert(temp-n1);
        }
        if(temp - n2 > 0 && st.find(temp - n2) == st.end()){
            q.push(temp-n2);
            st.insert(temp-n2);
        }
    }
    int x = st.size()-1;
        cout<<x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}