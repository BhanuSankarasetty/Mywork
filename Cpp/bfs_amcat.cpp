#include <iostream>
#include <vector>
#include <queue>
#include <unordered_set>
#include <unordered_map>
using namespace std;
int fs(vector<vector<int>>& adj,int n){
    vector<bool> vis(n, false);
    queue<int> q;

    q.push(0); 
    vis[0] = true;
    int t = 0;
    
        while(!q.empty()){
            int siz = q.size();
            for(int i = 0; i< siz; i++){
                int element = q.front();
                q.pop();
                for(int i = 0; i < adj[element].size(); i++){
                    if(!vis[adj[element][i]]){
                        vis[i] = true;
                        q.push(adj[element][i]);
                        break;
                    }
                }
            }
            t++;
        }
        return t;
}
int main() {
    int n, e;  
    cin >> n >> e;

    vector<vector<int>> adj(n);

    for (int i = 0; i < n; i++) {
        int u, v;
        cin >> u >> v;
        
        if (u >= 0 && u < n && v >= 0 && v < n) {
            adj[u].push_back(v);
            adj[v].push_back(u); 
        }
    }
    int ans = fs(adj,n);
    cout<<ans;


    return 0;
}
