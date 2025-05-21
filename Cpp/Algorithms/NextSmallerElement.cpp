#include<iostream>
#include<vector>
#include<stack>
using namespace std;
vector<int> nextSmaller(vector<int>arr){
    int n = arr.size();
    vector<int>ans(n,-1);
    stack<int>st;
    for(int i = 0;i < n;i++){
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();  
        }
        if (!st.empty()) {
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
    return ans;
}
void print(vector<int>&ans){
    for(auto it:ans){
        cout<<it<<" ";
    }
}
int main(){
    vector<int>arr = {4, 5, 2, 10, 8};
    vector<int>ans = nextSmaller(arr);
    print(ans);

}